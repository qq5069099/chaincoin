
#include <uint256.h>
#include <hash.h>
#include <primitives/block.h>
#include <base58.h>
#include <util/strencodings.h>
#include <univalue.h>
#include <secp256k1.h>

class tagTest
{
public:
	int a1;
	int a2;
	int a3;
};


tagTest fun()
{
	tagTest f;
	f.a1 = 1;
	f.a2 = 2;
	return f;
}

int main()
{
	CBlock b;

	std::string s = "03dd9859a23571a513d811925669a53d6f3475c197ace390218e0106f497a59fa4";
	auto v = ParseHex(s);

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

	secp256k1_context_destroy(ctx);

	auto [fffffff1, fffffffffff2, fffffffffff3] = fun();



	return 0;
}









