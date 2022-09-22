
#include <uint256.h>
#include <hash.h>
#include <primitives/block.h>
#include <base58.h>
#include <util/strencodings.h>



int main()
{
	CBlockHeader b;

	std::string s = "03dd9859a23571a513d811925669a53d6f3475c197ace390218e0106f497a59fa4";
	auto v = ParseHex(s);

	uint160 u160 = Hash160(v);
	std::string u160_str = u160.GetHex();
	
	std::vector<unsigned char> vv(u160.begin(), u160.end());
	vv.insert(vv.begin(), 0);

	std::string addr = EncodeBase58Check(vv);

	return 0;
}









