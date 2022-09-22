#pragma once

#include <cstdint>
#include "../types/uint256.h"
#include "../consensus/amount.h"
#include "../script/script.h"
#include "../account/account.h"


//交易类
class CTransaction
{
    int8_t          nVersion;           // 版本号
    uint32_t        nSequence;          // 序列号
    CAccount        accTo;              // 目标帐号
    CAmount         nValue;             // 输出金额
    CScript         scriptSig;          // 解锁脚本
    uint32_t        nLockTime;          // 锁定时间
};

