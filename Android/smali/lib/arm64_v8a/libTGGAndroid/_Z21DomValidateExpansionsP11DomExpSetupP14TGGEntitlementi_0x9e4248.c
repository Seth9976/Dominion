// 函数: _Z21DomValidateExpansionsP11DomExpSetupP14TGGEntitlementi
// 地址: 0x9e4248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *arg1

if (x21 == 0)
    return 

DomExpSetup* x19_1 = arg1
TGGEntitlement* x27_1 = arg2
uint64_t x22_1

if (*(arg1 + 0x10) == 0)
    x22_1 = 1
else if (*(x19_1 + 0x20) == 0)
    x22_1 = 2
else if (*(x19_1 + 0x30) == 0)
    x22_1 = 3
else if (*(x19_1 + 0x40) == 0)
    x22_1 = 4
else if (*(x19_1 + 0x50) == 0)
    x22_1 = 5
else if (*(x19_1 + 0x60) == 0)
    x22_1 = 6
else if (*(x19_1 + 0x70) == 0)
    x22_1 = 7
else if (*(x19_1 + 0x80) == 0)
    x22_1 = 8
else if (*(x19_1 + 0x90) == 0)
    x22_1 = 9
else if (*(x19_1 + 0xa0) == 0)
    x22_1 = 0xa
else if (*(x19_1 + 0xb0) == 0)
    x22_1 = 0xb
else if (*(x19_1 + 0xc0) == 0)
    x22_1 = 0xc
else if (*(x19_1 + 0xd0) == 0)
    x22_1 = 0xd
else if (*(x19_1 + 0xe0) == 0)
    x22_1 = 0xe
else if (*(x19_1 + 0xf0) == 0)
    x22_1 = 0xf
else if (*(x19_1 + 0x100) == 0)
    x22_1 = 0x10
else if (*(x19_1 + 0x110) == 0)
    x22_1 = 0x11
else if (*(x19_1 + 0x120) == 0)
    x22_1 = 0x12
else if (*(x19_1 + 0x130) == 0)
    x22_1 = 0x13
else if (*(x19_1 + 0x140) == 0)
    x22_1 = 0x14
else if (*(x19_1 + 0x150) == 0)
    x22_1 = 0x15
else if (*(x19_1 + 0x160) == 0)
    x22_1 = 0x16
else if (*(x19_1 + 0x170) == 0)
    x22_1 = 0x17
else if (*(x19_1 + 0x180) == 0)
    x22_1 = 0x18
else if (*(x19_1 + 0x190) == 0)
    x22_1 = 0x19
else if (*(x19_1 + 0x1a0) == 0)
    x22_1 = 0x1a
else if (*(x19_1 + 0x1b0) == 0)
    x22_1 = 0x1b
else if (*(x19_1 + 0x1c0) == 0)
    x22_1 = 0x1c
else if (*(x19_1 + 0x1d0) == 0)
    x22_1 = 0x1d
else if (*(x19_1 + 0x1e0) == 0)
    x22_1 = 0x1e
else if (*(x19_1 + 0x1f0) != 0)
    x22_1 = 0x20
else
    x22_1 = 0x1f

if (arg3 s<= 0)
    uint64_t x20_4 = 0
    
    if (x21 == 0x13)
        do
            void* x21_1 = x19_1 + (sx.q(x20_4.d) << 4)
            int128_t v0
            arg1, arg2, arg3, v0 = DomValidatePromos(x21_1 + 4, arg2, arg3)
            
            if (*(x21_1 + 4) == 0)
                break
            
        label_9e4590:
            x20_4 = sx.q(x20_4.d) + 1
            
            if (x20_4.d s>= x22_1.d)
                return 
        while (*(x19_1 + (x20_4 << 4)) == 0x13)
    
    x22_1 = zx.q(x22_1.d - 1)
    int64_t x8_42 = (x22_1 & 0xffffffff) << 0x20 s>> 0x1c
    void* x9_2 = x19_1 + (sx.q(x20_4.d) << 4)
    x20_4 = zx.q(x20_4.d - 1)
    *x9_2 = *(x19_1 + x8_42)
    *(x19_1 + x8_42) = 0
    goto label_9e4590

uint64_t x24_1 = 0
uint64_t x26_1 = zx.q(arg3)

while (true)
    int64_t fp_1 = sx.q(x24_1.d)
    void* x28_1 = x19_1 + (sx.q(x24_1.d) << 4)
    int128_t v0_1
    
    if (x21 != 0x13)
        TGGEntitlement* x20_2 = x27_1
        uint64_t x23_1 = x26_1
        
        while (true)
            arg1, arg2, arg3, v0_1 = DomEntitlementGrantsExpansion(zx.q(*x20_2), zx.q(x21))
            
            if ((arg1.d & 1) != 0)
                if (x21 u> 0x13)
                label_9e45d4:
                    pthread_kill(pthread_self(), 6)
                    CampaignMissionExtra* x0_5
                    TGGEntitlement* x1_1
                    int32_t x2
                    x0_5, x1_1, x2 = XNoReturn()
                    return DomValidateCampaignEntryOwnership(x0_5, x1_1, x2) __tailcall
                
                int32_t x8_36 = 1 << x21
                
                if ((x8_36 & 0xffa20) == 0)
                    if ((x8_36 & 0x5dc) == 0)
                        goto label_9e45d4
                    
                    arg1, arg2, arg3 = ProfileHasEntitlementForFirstEdition(zx.q(x21))
                    
                    if ((arg1.d & 1) == 0)
                        *(x19_1 + (fp_1 << 4) + 4) = 1
                else
                    *(x19_1 + (fp_1 << 4) + 4) = 0
                
                break
            
            uint64_t temp0_1 = x23_1
            x23_1 -= 1
            x20_2 += 4
            
            if (temp0_1 == 1)
                goto label_9e44c8
    else
        void* x20_1 = x19_1 + (fp_1 << 4)
        arg1, arg2, arg3, v0_1 = DomValidatePromos(x20_1 + 4, arg2, arg3)
        
        if (*(x20_1 + 4) == 0)
        label_9e44c8:
            x22_1 = sx.q(x22_1.d) - 1
            int64_t x8_35 = x22_1 << 4
            x24_1 = zx.q(x24_1.d - 1)
            *x28_1 = *(x19_1 + x8_35)
            *(x19_1 + x8_35) = 0
    x24_1 = sx.q(x24_1.d) + 1
    
    if (x24_1.d s>= x22_1.d)
        break
    
    x21 = *(x19_1 + (x24_1 << 4))
