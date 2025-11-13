// 函数: _Z8HasTraitRK19DomKingdomSetupData11DomCardEnumR15DomKingdomEntry
// 地址: 0xb2cf34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int64_t i = 0
void* __offset(DomKingdomSetupData, 0xe4) x23 = arg1 + 0xe4
int32_t x22 = 1

do
    if (*(x23 - 0x44) == 1)
        int32_t x21_1 = *(x23 - 0x40)
        int128_t v0_1
        
        if (*(GetClient() + 0x5068) == 0)
            void* x0_5
            x0_5, v0_1 = DomDefGet(zx.q(x21_1), 0x18)
            
            if ((zx.d(*(x0_5 + 0xcd)) & 1) != 0)
            label_b2cfc8:
                
                if (*(x23 - 0x34) == x20 || *(x23 - 0x30) == x20 || *(x23 - 0x2c) == x20
                        || *(x23 - 0x28) == x20 || *(x23 - 0x24) == x20 || *(x23 - 0x20) == x20
                        || *(x23 - 0x1c) == x20 || *(x23 - 0x18) == x20 || *(x23 - 0x14) == x20
                        || *(x23 - 0x10) == x20 || *(x23 - 0xc) == x20 || *(x23 - 8) == x20
                        || *(x23 - 4) == x20 || *x23 == x20)
                    *arg3 = *(x23 - 0x44)
                    break
        else
            void* x0_3
            x0_3, v0_1 = DomDefGet(zx.q(x21_1), zx.q(*(ActiveGame() + 0x30)))
            
            if ((zx.d(*(x0_3 + 0xcd)) & 1) != 0)
                goto label_b2cfc8
    
    bool cond:0_1 = i u< 3
    i += 1
    x22 = cond:0_1 ? 1 : 0
    x23 += 0x48
while (i != 4)

return zx.q(x22) & 1
