// 函数: _Z23GameTimeRemainingUpdate9UI2Handle9PlayerWho
// 地址: 0x9b566c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x22
void* var_20 = entry_x22
void* entry_x21
void* var_18 = entry_x21
int32_t i = arg2
int32_t x19 = arg1
void* result = GetClient()

if (*(result + 0x5068) == 2)
    int32_t x24_1 = *(GetClient() + 0x75b0)
    void* x0_1 = GetClient()
    int32_t x9_1 = *(x0_1 + 0x5068)
    XString var_48
    
    if (x9_1 - 3 u>= 2 && x9_1 != 1)
        if (x9_1 == 2)
            entry_x21 = *(GetClient() + 0x5080) + zx.q(*(x0_1 + 0x506c)) * 0x1338
            goto label_9b5700
        
    label_9b57d0:
        pthread_kill(pthread_self(), 6)
        XNoReturn()
    label_9b57dc:
        XString::XString()
        XString::XString()
        int64_t (* x23_1)()
        
        x23_1 = x24_1 != i ? sub_9b6ee8 : sub_9b6f64
        
        XString var_50
        GameDismissDlgStrings(1, (x24_1 != i ? 1 : 0).b, entry_x22, &var_48, &var_50)
        *(entry_x21 + 0x2c) = 0x3e8
        GameMsgBoxTranslated(XString::operator char const*(), XString::operator char const*(), 
            0x20, &data_793a18, &data_793a18, x23_1, nullptr)
        XString::~XString()
        XString::~XString()
        goto label_9b5868
    
    entry_x21 = x0_1 + 0x50a8
label_9b5700:
    int32_t var_34
    result = GameGetTimeRemaining(entry_x21, zx.q(i), &var_34)
    
    if ((result.d & 1) != 0)
        int64_t* x1_1
        
        if (x24_1 != i)
            x1_1 = &data_11cd5d0
        else
            x1_1 = &data_11cd5a0
        
        UI2SetState(zx.q(x19), x1_1, 0xffffffff, 0)
        int32_t x0_5 = var_34
        
        if (x0_5 s> 0)
            goto label_9b5870
        
        var_34 = 0
        void* x0_6 = GetClient()
        int32_t x9_2 = *(x0_6 + 0x5068)
        
        if (x9_2 - 3 u>= 2 && x9_2 != 1)
            if (x9_2 != 2)
                goto label_9b57d0
            
            entry_x22 = zx.q(*(x0_6 + 0x506c))
            
            if (*(*(GetClient() + 0x5080) + entry_x22 * 0x1338 + 0x2c) != 0x3e8)
                goto label_9b57a0
            
            goto label_9b5868
        
        if (*(x0_6 + 0x50d4) == 0x3e8)
        label_9b5868:
            x0_5 = 0
        label_9b5870:
            SecondsToTimeString(x0_5)
            UI2StateDeclText* x1_4
            
            if (x24_1 != i)
                x1_4 = &data_11cd5e8
            else
                x1_4 = &data_11cd5b8
            
            UI2SetText(zx.q(x19), x1_4, &var_48, 0xffffffff)
            return XString::~XString()
        
    label_9b57a0:
        uint64_t x8_9 = zx.q(*(entry_x21 + 0x11b4))
        
        if (x8_9.d s< 1)
            goto label_9b57d0
        
        entry_x22 = entry_x21 + 0x54
        
        while (*(entry_x22 + 0x1c) != i)
            uint64_t temp0_1 = x8_9
            x8_9 -= 1
            entry_x22 += 0x22c
            
            if (temp0_1 == 1)
                goto label_9b57d0
        
        goto label_9b57dc

return result
