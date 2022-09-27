
#include <uint256.h>
#include <hash.h>
#include <primitives/block.h>
#include <base58.h>
#include <util/strencodings.h>
#include <univalue.h>
#include <secp256k1.h>
#include <logging.h>

//语法测试
class tagTest
{
public:
	int a1;
	int a2;
	int a3;
	
	//静态函数
	static tagTest fun()
	{
		tagTest f;
		f.a1 = 1;
		f.a2 = 2;
		return f;
	}
};


int main()
{
	CBlock b;

	std::string s = "03dd8ae5cf10f9229f76c096cf2b380bb78d9a33e9ff2b71f7ce1930ae3070bed5";
	std::vector<unsigned char> v = ParseHex(s);

	uint160 u160 = Hash160(v);
	std::string u160_str = u160.GetHex();
	
	std::vector<unsigned char> vv(u160.begin(), u160.end());
	vv.insert(vv.begin(), 0);

	std::string addr = EncodeBase58Check(vv);

	//测试修改
	UniValue uniValue(UniValue::VARR);
	uniValue.push_backV(vv.begin(), vv.end());
	std::string ss = uniValue.write();

	//测试椭圆公钥生成
	secp256k1_context* ctx = secp256k1_context_create(SECP256K1_CONTEXT_SIGN);
	secp256k1_pubkey pubkey;
	int ret = secp256k1_ec_pubkey_create(ctx, &pubkey, (const unsigned char*)"54645545454654654645644889875556445546");

	unsigned char vch[65];
	size_t clen = 65;
	bool fCompressed = false;
	secp256k1_ec_pubkey_serialize(ctx, (unsigned char*)vch, &clen, &pubkey, fCompressed ? SECP256K1_EC_COMPRESSED : SECP256K1_EC_UNCOMPRESSED);

	unsigned char vch_fCompressed[33];
	size_t clen_fCompressed = 33;
	bool fCompressed_fCompressed = true;
	secp256k1_ec_pubkey_serialize(ctx, (unsigned char*)vch_fCompressed, &clen_fCompressed, &pubkey, fCompressed_fCompressed ? SECP256K1_EC_COMPRESSED : SECP256K1_EC_UNCOMPRESSED);

	secp256k1_context_destroy(ctx);

	//语法测试
	auto [fffffff1, fffffffffff2, fffffffffff3] = tagTest::fun();

	//测试日志
	LogInstance().StartLogging();
	LogPrintf("sss\n");
	LogPrintf("%s---%d\n", "val:", 123);
	LogPrintf("%s---%d\n", "val:", 456);

	return 0;
}









