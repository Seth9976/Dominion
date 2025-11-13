// 函数: _Z12RunPileSetupR7DomGame11DomCardEnumR10ExtraSetup12DomPileFlags
// 地址: 0xbbb154
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg4
int32_t x20 = arg2.d
void var_54
int32_t i_4 = HasArtifactSetup(arg1, arg2, &var_54)

if (i_4 s>= 1)
    uint64_t i_2 = zx.q(i_4)
    void* x24_1 = &var_54
    uint64_t i
    
    do
        uint64_t x1 = zx.q(*x24_1)
        x24_1 += 4
        CardCreate(arg1, x1, 6, 0xffffffff, 0)
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_6 = 0
DomCardEnum var_74

if ((HasExtraPile(arg1, zx.q(x20), &var_74, &i_6, x22.b & 1) & 1) != 0)
    int32_t i_5 = i_6
    
    if (i_5 s>= 1)
        uint64_t i_3
        
        if (i_5 s> 1)
            i_3 = zx.q(i_5)
        else
            i_3 = 1
        
        DomCardEnum* x25_1 = &var_74
        uint64_t i_1
        
        do
            int32_t x23_1 = *x25_1
            
            if ((ExtraPileExists(arg1, zx.q(x23_1)) & 1) == 0)
                AddPileNoSetup(arg1, zx.q(NextAvailableNonSupplyPile(arg1)), zx.q(x23_1), arg3, 
                    zx.q(x22), 0)
                RunPileSetup(arg1, zx.q(x23_1), arg3, zx.q(x22))
            
            i_1 = i_3
            i_3 -= 1
            x25_1 += 4
        while (i_1 != 1)

void (* var_80)()
int32_t x0_10
int64_t x4_2
x0_10, x4_2 = HasSetupFn(arg1, zx.q(x20), &var_80)

if ((x0_10 & 1) != 0)
    DomPushSetupContext(arg1, zx.q(x20), arg3, 0xffffffff, x4_2)
    var_80()
    int32_t* x8_2 = __emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000
    *x8_2 -= 1

return CalcExtraPiles(arg1, zx.q(x20), arg3) __tailcall
