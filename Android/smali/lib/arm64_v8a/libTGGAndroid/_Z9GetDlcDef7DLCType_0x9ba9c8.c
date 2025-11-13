// 函数: _Z9GetDlcDef7DLCType
// 地址: 0x9ba9c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t var_18 = 3
int32_t var_14 = arg1
int64_t result = GameSepcific_TryGetDlcDef(&var_18)

if (result == 0)
    var_18 = 0
    int32_t var_14_1 = x19
    result = GameSepcific_TryGetDlcDef(&var_18)
    
    if (result == 0)
        var_18 = 2
        int32_t var_14_2 = x19
        result = GameSepcific_TryGetDlcDef(&var_18)
        
        if (result == 0)
            var_18 = 1
            int32_t var_14_3 = x19
            result = GameSepcific_TryGetDlcDef(&var_18)
            
            if (result == 0)
                pthread_kill(pthread_self(), 6)
                return ExpireNewProductIcon(XNoReturn()) __tailcall

return result
