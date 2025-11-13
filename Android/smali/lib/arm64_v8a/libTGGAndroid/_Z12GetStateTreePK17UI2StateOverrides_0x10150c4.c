// 函数: _Z12GetStateTreePK17UI2StateOverrides
// 地址: 0x10150c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = data_2427c78

if (x20 == 0)
    int64_t* x0 = operator new(0x10)
    x20 = x0
    *x0 = 0
    x0[1] = 0
    *x20 = XPooledCalloc(0x20000)
    x20[1].d = 0x3fff
    data_2427c78 = x20

int64_t x23 = arg1 | arg1 u>> 4

for (int64_t* i = *(*x20 + ((x23 & zx.q(x20[1].d)) << 3)); i != 0; i = i[2])
    if (*i == arg1)
        return i[1]

StateTree* result = XPooledCalloc(0x20)
StateTree::StateTree()

if (*(arg1 + 8) s>= 1)
    int64_t x24_1 = 0
    int64_t i_1 = 0
    
    do
        StateTreeAddEntry(result, *arg1 + x24_1, i_1.d)
        i_1 += 1
        x24_1 += 0x30
    while (i_1 s< sx.q(*(arg1 + 8)))

UI2StateOverrides**** x21_1 = data_2427c78
uint64_t x22_1 = zx.q(x21_1[1].d) & zx.q(x23.d)
int64_t* x8_6 = (*x21_1)[zx.q(x22_1.d)]

if (x8_6 == 0)
label_10151b4:
    UI2StateOverrides** x0_4 = XPooledMalloc(0x18)
    *x0_4 = arg1
    x0_4[1] = result
    x0_4[2] = (*x21_1)[x22_1]
    (*x21_1)[x22_1] = x0_4
    *(x21_1 + 0xc) += 1
else
    while (*x8_6 != arg1)
        x8_6 = x8_6[2]
        
        if (x8_6 == 0)
            goto label_10151b4
    
    x8_6[1] = result

return result
