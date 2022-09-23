#include <uint256.h>


//账号地址
using CAccountAddr= uint256;


//账号类型
struct CAccount
{
    CAccountAddr    addr;            // 账号地址
    CAmount         nValue;          // 帐号余额
    uint32_t        nLastSequence;   // 最后序号
};




