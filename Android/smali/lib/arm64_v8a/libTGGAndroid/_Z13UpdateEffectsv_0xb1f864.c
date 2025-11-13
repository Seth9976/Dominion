// 函数: _Z13UpdateEffectsv
// 地址: 0xb1f864
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDomClient + 0x20640) == 0)
    return 

DomClient* x0 = GameDlgManagerDialogActive(0x7e4, 5)

if ((x0.d & 1) != 0 || *(gDomClient + 0x20640) == 0)
    return 

int32_t x25_1 = *(gDomClient + 0x20648)
int32_t i

do
    int64_t x26_1 = *(gDomClient + 0x20638)
    int32_t* x19_1 = x26_1 + muls.dp.d(x25_1, 0x38)
    uint32_t x8_3
    
    if (zx.d(x19_1[0xc].b) == 0)
        if ((TryGrabLocks(x0, x19_1).d & 1) == 0)
            break
        
        x8_3 = zx.d(x19_1[0xc].b)
    else
        x8_3 = 1
    
    void* x9_2 = x26_1 + sx.q(x25_1) * 0x38
    char var_58_1 = (x8_3 != 0 ? 1 : 0).b
    int64_t var_60_1 = *(x9_2 + 0x28)
    int32_t var_68_1 = *(x9_2 + 0x24)
    int32_t var_70_1 = *(x9_2 + 0x20)
    x0 = ResolveEffect(zx.q(*x19_1), zx.q(*(x9_2 + 4)), zx.q(*(x9_2 + 8)), zx.q(*(x9_2 + 0xc)), 
        zx.q(*(x9_2 + 0x10)), zx.q(*(x9_2 + 0x14)), zx.q(*(x9_2 + 0x18)), zx.q(*(x9_2 + 0x1c)))
    i = *(gDomClient + 0x20640)
    x25_1 = *(gDomClient + 0x20648) + 1
    *(gDomClient + 0x20648) = x25_1
    
    if (x25_1 == i)
        *(gDomClient + 0x20640) = 0
        *(gDomClient + 0x20648) = 0
        break
while (i != 0)
