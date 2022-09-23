#pragma once

#include <cstdint>
#include <uint256.h>
#include "../consensus/amount.h"
#include "account.h"


//交易类
class CTransaction
{
    int8_t          nVersion;           // 版本号
    uint32_t        nSequence;          // 序列号
    CAccount        accTo;              // 目标帐号
    CAmount         nValue;             // 输出金额
    uint256         scriptSig;          // 解锁脚本
    uint32_t        nLockTime;          // 锁定时间
};

