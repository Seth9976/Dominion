// 函数: _Z18HasAnyFirstEditionv
// 地址: 0xb2745c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x19 = ExpansionEnumerator::begin()
int64_t x0_3 = ExpansionEnumerator::end()

if (x19 == x0_3)
    return 0

int32_t* x21 = x19
int32_t x0_5
bool cond:0_1

do
    uint64_t x0_4 = zx.q(*x21)
    x21 = &x21[1]
    x0_5 = ProfileHasEntitlementForFirstEdition(x0_4)
    
    if ((x0_5 & 1) != 0)
        break
    
    cond:0_1 = x0_3 - 4 != x19
    x19 = x21
while (cond:0_1)
return zx.q(x0_5) & 1
