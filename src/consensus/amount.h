#pragma once

#include <cstdint>

//链币类型
typedef int64_t CAmount;

//链币最小单位
constexpr CAmount COIN = 100000000;

constexpr CAmount MAX_MONEY = 100000000 * COIN;
inline bool MoneyRange(const CAmount& nValue) { return (nValue >= 0 && nValue <= MAX_MONEY); }





