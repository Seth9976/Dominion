// 函数: _Z8GameUndoR8GameSavei
// 地址: 0x9b112c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_2c = 0
int32_t var_30 = 3
int32_t var_24 = arg2
void* x0 = GetClient()
uint64_t x8 = zx.q(*(x0 + 0x5068))

if (x8.d u<= 4)
    switch (x8)
        case 0
        label_9b1248:
            uint32_t* x21_2 = GetClient() + 0x5090
            XString::~XString()
            XString::~XString()
            int64_t result = XString::~XString()
            uint32_t x9_5 = *x21_2
            *x21_2 = zx.d(*(arg1 + 0x1330))
            *(arg1 + 0x1330) = x9_5
            x21_2[1] -= 1
            int64_t entry_x8
            __builtin_memset(entry_x8, 0, 0x18)
            return result
        case 1, 3, 4
        label_9b1180:
            void* x0_1 = GetClient()
            int32_t x9_1 = *(x0_1 + 0x5068)
            
            if (x9_1 - 3 u< 2 || x9_1 == 1)
                if (x0_1 + 0x50a8 != arg1)
                    goto label_9b1248
                
            label_9b11e4:
                
                if (*(GetClient() + 0x5068) == 1)
                    uint64_t x8_6 = zx.q(*(arg1 + 0x11b4))
                    
                    if (x8_6.d s>= 1)
                        int64_t i_4
                        
                        if (x8_6.d != 1)
                            i_4 = x8_6 & 0xfffffffe
                            int64_t i_3 = i_4
                            GameSave& x11_2 = arg1
                            int64_t i
                            
                            do
                                *(x11_2 + 0x74) = 0
                                *(x11_2 + 0x2a0) = 0
                                i = i_3
                                i_3 -= 2
                                x11_2 += 0x458
                            while (i != 2)
                            
                            if (i_4 != x8_6)
                                goto label_9b12c8
                        else
                            i_4 = 0
                        label_9b12c8:
                            int32_t* x10_5 = arg1 + i_4 * 0x22c + 0x74
                            int64_t i_2 = x8_6 - i_4
                            int64_t i_1
                            
                            do
                                *x10_5 = 0
                                i_1 = i_2
                                i_2 -= 1
                                x10_5 = &x10_5[0x8b]
                            while (i_1 != 1)
                
                return GameSpecific_Load(arg1, &var_30, 3)
            
            if (x9_1 == 2)
                if (*(GetClient() + 0x5080) + zx.q(*(x0_1 + 0x506c)) * 0x1338 != arg1)
                    goto label_9b1248
                
                goto label_9b11e4
        case 2
            int32_t x8_7 = *(x0 + 0x506c)
            
            if (x8_7 == 0)
                goto label_9b1248
            
            uint64_t x9_2 = zx.q(x8_7.w)
            
            if (x9_2.d u>= *(x0 + 0x5088))
                goto label_9b1248
            
            int64_t x10_3 = *(x0 + 0x5080)
            
            if (x10_3 == 0 || *(x10_3 + x9_2 * 0x1338 + 0x1330) != x8_7)
                goto label_9b1248
            
            goto label_9b1180

pthread_kill(pthread_self(), 6)
int64_t x0_11
GameTurnInfo2* x1_1
x0_11, x1_1 = XNoReturn()
return ClientSendWaitingMessage(x0_11, x1_1) __tailcall
