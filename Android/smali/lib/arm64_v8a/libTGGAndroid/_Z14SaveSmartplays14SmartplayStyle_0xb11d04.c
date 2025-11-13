// 函数: _Z14SaveSmartplays14SmartplayStyle
// 地址: 0xb11d04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 1)
    void* result = GetClient()
    
    if (*(result + 0x5068) == 2)
        return result
    
    int32_t* x0_3 = ActiveGame()
    return LocalGameSave(x0_3, *x0_3) __tailcall

if (arg1 == 0)
    *(GetActiveProfile() + 0x42e8) = CurrentDateTime()
    return SaveProfiles() __tailcall

pthread_kill(pthread_self(), 6)
uint64_t x0_6
int64_t x1_3
x0_6, x1_3 = XNoReturn()
return SmartplayNextOption(x0_6, x1_3) __tailcall
