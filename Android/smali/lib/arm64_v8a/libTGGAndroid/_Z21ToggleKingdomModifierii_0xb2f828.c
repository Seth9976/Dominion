// 函数: _Z21ToggleKingdomModifierii
// 地址: 0xb2f828
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameSetup* x0 = GetActiveGameSetup()
GetKingdomConfig(x0)
DomSetupConfig var_19c0
int32_t var_2cc
int32_t var_2cc_1

switch (arg1)
    case 0
        int32_t var_dc4
        int32_t var_dc4_1
        int32_t var_dc4_2
        
        if (var_dc4 == 2)
            if (arg2 == 1)
                var_dc4_2 = 0
                return SaveSetupData(x0, &var_19c0)
            
            var_dc4_1 = 1
            return SaveSetupData(x0, &var_19c0)
        
        if (var_dc4 == 1)
            if (arg2 == 0)
                var_dc4_2 = 0
                return SaveSetupData(x0, &var_19c0)
            
            var_dc4_1 = 2
            return SaveSetupData(x0, &var_19c0)
        
        if (var_dc4 == 0)
            var_dc4_1 = arg2 + 1
            return SaveSetupData(x0, &var_19c0)
    case 1
        int32_t var_dc0
        int32_t var_dc0_4
        
        if (var_dc0 == 2)
            if (arg2 == 1)
                var_dc0_4 = 0
                return SaveSetupData(x0, &var_19c0)
            
            int32_t var_dc0_2 = 1
            return SaveSetupData(x0, &var_19c0)
        
        if (var_dc0 == 1)
            if (arg2 == 0)
                var_dc0_4 = 0
                return SaveSetupData(x0, &var_19c0)
            
            int32_t var_dc0_3 = 2
            return SaveSetupData(x0, &var_19c0)
        
        if (var_dc0 == 0)
            int32_t var_dc0_1 = arg2 + 1
            return SaveSetupData(x0, &var_19c0)
    case 2
        int32_t x8_8
        
        if (arg2 == 2)
            x8_8 = var_2cc & 0xfffffff9
            
            if ((var_2cc & 4) == 0)
                x8_8 |= 4
            
            var_2cc_1 = x8_8
            return SaveSetupData(x0, &var_19c0)
        
        if (arg2 == 1)
            if ((var_2cc & 2) != 0)
                x8_8 = var_2cc & 0xfffffffd
            else
                x8_8 = (var_2cc & 0xfffffff8) | 2
            
            var_2cc_1 = x8_8
            return SaveSetupData(x0, &var_19c0)
        
        if (arg2 == 0)
            if ((var_2cc & 1) != 0)
                x8_8 = var_2cc & 0xfffffffe
            else
                x8_8 = (var_2cc & 0xfffffffc) | 1
            
            var_2cc_1 = x8_8
            return SaveSetupData(x0, &var_19c0)
    case 3
        var_2cc_1 = var_2cc ^ 8
        return SaveSetupData(x0, &var_19c0)
    case 4
        var_2cc_1 = var_2cc ^ 0x10
        return SaveSetupData(x0, &var_19c0)
    case 5
        var_2cc_1 = var_2cc ^ 0x20
        return SaveSetupData(x0, &var_19c0)
    case 6
        var_2cc_1 = var_2cc ^ 0x40
        return SaveSetupData(x0, &var_19c0)

pthread_kill(pthread_self(), 6)
return DomCreateKingdomModifiersClick(XNoReturn()) __tailcall
