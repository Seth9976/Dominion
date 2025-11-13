// 函数: _Z9FindStateR9AttribMapPKc
// 地址: 0x103ed18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_result
void* entry_result_1 = entry_result
int64_t* x0_1 = AttribMapGetDef(*gUI2AttribTable, arg1, *macro_ptr_UI2StateOverrides, 0x69)

if (x0_1 != 0)
    int64_t x21_1 = sx.q(x0_1[1].d)
    
    if (x21_1.d s>= 1)
        int64_t x22_1 = 0
        entry_result = *x0_1 + 0x18
        
        do
            if (strcasecmp(*(entry_result - 0x18), arg2) == 0)
                return entry_result
            
            x22_1 += 1
            entry_result += 0x30
        while (x22_1 s< x21_1)

pthread_kill(pthread_self(), 6)
XNoReturn()
return entry_result
