#pragma once

#include <cstdint>

//��������
typedef int64_t CAmount;

//������С��λ
constexpr CAmount COIN = 100000000;

constexpr CAmount MAX_MONEY = 100000000 * COIN;
inline bool MoneyRange(const CAmount& nValue) { return (nValue >= 0 && nValue <= MAX_MONEY); }





