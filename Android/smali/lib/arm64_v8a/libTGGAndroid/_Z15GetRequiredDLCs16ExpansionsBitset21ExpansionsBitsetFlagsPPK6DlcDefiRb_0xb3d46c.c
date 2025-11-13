// 函数: _Z15GetRequiredDLCs16ExpansionsBitset21ExpansionsBitsetFlagsPPK6DlcDefiRb
// 地址: 0xb3d46c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_b0[0x12]
int32_t x0 = DomExpansionsFromBitset(arg1, &var_b0)
*arg5 = false
int32_t x21

if (x0 s< 1)
    x21 = 0
else
    x21 = x0
    int64_t i = 0
    
    do
        int32_t x22_1 = var_b0[i]
        void* var_68
        int32_t x0_1
        
        if (x22_1 != 0x13)
            x0_1 = GameSpecific_GetDlcs(0, &var_68)
        
        if (x22_1 == 0x13 || x0_1 s< 1)
        label_b3d568:
            pthread_kill(pthread_self(), 6)
            return GameEndUpdate(XNoReturn()) __tailcall
        
        int64_t x27_1 = 0
        void* fp_1
        
        while (true)
            fp_1 = var_68
            
            if ((DomEntitlementGrantsExpansion(DomDLCGrantsEntitlement(zx.q(*(fp_1 + x27_1))), 
                    zx.q(x22_1)) & 1) != 0)
                break
            
            x27_1 += 0x80
            
            if (zx.q(x0_1) << 7 == x27_1)
                goto label_b3d568
        
        void* x22_2 = fp_1 + x27_1
        int32_t x0_6 = ProfileDLCState(x22_2)
        arg3[i] = x22_2
        
        if (x0_6 != 0)
            *arg5 = true
        
        i += 1
    while (i != zx.q(x0))

return zx.q(x21)
