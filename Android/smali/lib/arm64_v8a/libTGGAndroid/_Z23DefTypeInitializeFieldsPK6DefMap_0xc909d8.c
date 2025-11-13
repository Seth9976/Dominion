// 函数: _Z23DefTypeInitializeFieldsPK6DefMap
// 地址: 0xc909d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) == 0)
    return 

DefMap const* x19_1 = arg1
arg1 = DefIterGetFirst(arg1)
int32_t i_1 = arg1.d

if (arg1.d == 0xffffffff)
    return 

int32_t i

do
    arg1 = DefIterGetNext(x19_1, &i_1)
    char* s2 = *(arg1 + 0x10)
    DefMap const* x20_1 = arg1
    int64_t* x24_1
    
    if (s2 != 0)
        uint64_t x25_1 = zx.q(*gDefTypeLookupCount)
        
        if (x25_1.d s< 1)
            goto label_c90b48
        
        int64_t (* const x26_1)() = gDefTypeFastLookupArray
        
        while (true)
            x24_1 = *x26_1
            
            if (strcasecmp(*x24_1, s2).d == 0)
                break
            
            uint64_t temp0_1 = x25_1
            x25_1 -= 1
            x26_1 += 8
            
            if (temp0_1 == 1)
                goto label_c90b48
        
        goto label_c90a78
    
    x24_1 = nullptr
label_c90a78:
    char* s2_1 = *(x20_1 + 0x28)
    *(x20_1 + 0x18) = x24_1
    int64_t* x25_2
    
    if (s2_1 == 0)
        x25_2 = nullptr
    else
        uint64_t x26_2 = zx.q(*gDefTypeLookupCount)
        
        if (x26_2.d s< 1)
            goto label_c90b48
        
        int64_t (* const x27_1)() = gDefTypeFastLookupArray
        
        while (true)
            x25_2 = *x27_1
            
            if (strcasecmp(*x25_2, s2_1).d == 0)
                break
            
            uint64_t temp1_1 = x26_2
            x26_2 -= 1
            x27_1 += 8
            
            if (temp1_1 == 1)
                goto label_c90b48
    
    *(x20_1 + 0x30) = x25_2
    i = i_1
    
    if ((zx.d(*(x20_1 + 0x51)) & 1) != 0 && i != 0xffffffff)
        goto label_c90b48
    
    int32_t x9_2 = *(x24_1 + 0x14)
    char const* const x0_3
    
    if (x9_2 != 0 && x9_2 != *(x20_1 + 0x60))
        *x19_1
        *(x20_1 + 8)
        x0_3 = "In definition %s field %s has the wrong type"
    label_c90b3c:
        XTrace(x0_3)
    label_c90b48:
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return DefTypeRegistryInitForApp() __tailcall
    
    int32_t x9_3 = *(x20_1 + 0x64)
    
    if (x9_3 != 0 && *(x25_2 + 0x14) != x9_3)
        *x19_1
        *(x20_1 + 8)
        x0_3 = "In definition %s ptr field %s has the wrong type"
        goto label_c90b3c
while (i != 0xffffffff)
