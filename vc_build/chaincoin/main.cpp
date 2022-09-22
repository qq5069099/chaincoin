
#include <uint256.h>
#include <hash.h>
#include <primitives/block.h>



int main()
{
	CBlockHeader b;

	std::string s = "03ba3680749a1e1100d13648c20cfc7838a9ee637ead996615f6bbe3e324ac28e2";
	uint256 u256 = Hash(s);
	uint160 u160 = Hash160(u256);



	return 0;
}