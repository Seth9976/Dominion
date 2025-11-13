// 函数: _Z28RandomizerDeck_DrawOneFilterR14RandomizerDeckNSt6__ndk18functionIFb11DomCardEnumEEE14RandomizerFlag
// 地址: 0xa2efd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg2
int32_t x21 = arg3
int64_t x0 = RandomizerDeck_DrawOne(arg1, gCampaignSetup, 0)
uint32_t x8 = (x0 u>> 0x20).d
int64_t var_38 = x0
int32_t x20_1

if (x8 == 0)
label_a2f15c:
    x20_1 = 0
else
    uint32_t var_24
    
    if ((x21 & 1) == 0)
        while (true)
            var_24 = x8
            int64_t* x0_4 = *(x20 + 0x20)
            
            if (x0_4 == 0)
                goto label_a2f1a0
            
            if (((*(*x0_4 + 0x30))(x0_4, &var_24) & 1) != 0
                    && (zx.d(*(DomDefGet(zx.q(var_38:4.d), 0x17) + 0xcc)) & 0x40) == 0)
                void* x0_9 = DomDefGet(zx.q(var_38:4.d), 0x17)
                
                if ((x21 & 2) != 0)
                    break
                
                if ((*(x0_9 + 0xc8) & 0x800) == 0)
                    break
            
            RandomizerDeck_Reject(arg1, &var_38)
            int64_t x0_3 = RandomizerDeck_DrawOne(arg1, gCampaignSetup, 0)
            x8 = (x0_3 u>> 0x20).d
            var_38 = x0_3
            
            if (x8 == 0)
                goto label_a2f15c
    else if ((x21 & 2) != 0)
        while (true)
            var_24 = x8
            int64_t* x0_18 = *(x20 + 0x20)
            
            if (x0_18 == 0)
                goto label_a2f1a0
            
            if (((*(*x0_18 + 0x30))(x0_18, &var_24) & 1) != 0)
                DomDefGet(zx.q(var_38:4.d), 0x17)
                DomDefGet(zx.q(var_38:4.d), 0x17)
                break
            
            RandomizerDeck_Reject(arg1, &var_38)
            int64_t x0_22 = RandomizerDeck_DrawOne(arg1, gCampaignSetup, 0)
            x8 = (x0_22 u>> 0x20).d
            var_38 = x0_22
            
            if (x8 == 0)
                goto label_a2f15c
    else
        while (true)
            var_24 = x8
            int64_t* x0_13 = *(x20 + 0x20)
            
            if (x0_13 == 0)
            label_a2f1a0:
                sub_a58ab4()
                noreturn
            
            if (((*(*x0_13 + 0x30))(x0_13, &var_24) & 1) != 0)
                DomDefGet(zx.q(var_38:4.d), 0x17)
                
                if ((zx.d(*(DomDefGet(zx.q(var_38:4.d), 0x17) + 0xcd)) & 8) == 0)
                    break
            
            RandomizerDeck_Reject(arg1, &var_38)
            int64_t x0_12 = RandomizerDeck_DrawOne(arg1, gCampaignSetup, 0)
            x8 = (x0_12 u>> 0x20).d
            var_38 = x0_12
            
            if (x8 == 0)
                goto label_a2f15c
    x20_1 = var_38:4.d

RandomizerDeck_ReturnRejects(arg1)
return zx.q(x20_1)
