// 函数: _Z17DefParseReadBlockPvPK6DefMapP12DefParseTreeb
// 地址: 0xc8bbe0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg4.d & 1) == 0)
    DefinitionFillBlockWithDefaults(arg1, arg2)

if (arg3 == 0)
    return 

*(arg3 + 0x20) = arg2

if (*(arg2 + 0x28) != 0 && *(arg2 + 0x20) != 0)
    int64_t* x8_2 = *(arg3 + 8)
    
    while (true)
        int32_t x1_1
        int32_t x2
        
        if (x8_2 == 0)
        label_c8bc88:
            x1_1 = 0
            x2 = *(arg2 + 0x28)
            
            if (0 == x2)
                break
        else
            int64_t x23_1 = *x8_2
            x8_2 = x8_2[1]
            
            if (strcasecmp(XString::operator char const*(), "_version") != 0)
                continue
            else
                if (x23_1 == 0)
                    goto label_c8bc88
                
                x1_1 = atoi(XString::operator char const*())
                x2 = *(arg2 + 0x28)
                
                if (x1_1 == x2)
                    break
        
        int64_t* x22_1 = *(arg3 + 0x20)
        int64_t x8_3 = x22_1[4]
        
        if (x8_3 != 0 && (x8_3(arg3, x1_1, x2) & 1) == 0)
            *x22_1
            XTrace("Difficult versioning function failed on '%s'")
        
        break

return DefParseReadBlockNoVersion(arg1, arg2, arg3) __tailcall
