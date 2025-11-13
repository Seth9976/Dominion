// 函数: _Z10MakeStylesP6XAsset13UIElementTypePPKc
// 地址: 0x1031f98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = &data_793a18
int64_t* x8 = *arg1
int32_t x23
int64_t* x22

if (x8 == 0)
    int64_t*** x21_2 = arg1
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21_2, false, true)
    x22 = **x21_2
    
    if (x22[1].d s>= 1)
        goto label_1031fe0
    
    x23 = 1
else
    x22 = *x8
    
    if (x22[1].d s< 1)
        x23 = 1
    else
    label_1031fe0:
        int64_t x24_1 = 0
        int64_t i = 0
        x23 = 1
        
        do
            AttribMap* x21_1 = *x22 + x24_1
            
            if (AttribMapGetInt(*gUI2AttribTable, x21_1, 0x66) != arg2)
                goto label_1031ff0
            
            int64_t x0_3 = AttribMapGetString(*gUI2AttribTable, x21_1, 0x64)
            
            if (x0_3 != 0)
                arg3[sx.q(x23)] = x0_3
                x23 += 1
            label_1031ff0:
                
                if (x23 == 0x7f)
                    pthread_kill(pthread_self(), 6)
                    int64_t* x0_10
                    int32_t x1_4
                    x0_10, x1_4 = XNoReturn()
                    return FieldGetComboOptions(x0_10, x1_4) __tailcall
            
            i += 1
            x24_1 += 0x18
        while (i s< sx.q(x22[1].d))
char** x1_3 = &arg3[sx.q(x23)]
*x1_3 = nullptr
bool (* var_48)(char const*, char const*) = SortStyles
std::__ndk1::__sort<bool (*&)(char const*, char const*), char const**>(arg3, x1_3, &var_48)
return 1
