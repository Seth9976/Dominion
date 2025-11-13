// 函数: _Z11FindElementR10AttribTreePKc
// 地址: 0x103ec8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x21
int64_t var_18 = entry_x21
AttribTree& entry_x19
AttribTree& var_8 = entry_x19

if (*(arg1 + 8) s>= 1)
    entry_x19 = arg1
    entry_x21 = 0
    int64_t i = 0
    
    do
        if (strcasecmp(AttribMapGetString(*gUI2AttribTable, *entry_x19 + entry_x21, 0x64), arg2)
                == 0)
            return *entry_x19 + entry_x21
        
        i += 1
        entry_x21 += 0x18
    while (i s< sx.q(*(entry_x19 + 8)))

pthread_kill(pthread_self(), 6)
XNoReturn()
return *entry_x19 + entry_x21
