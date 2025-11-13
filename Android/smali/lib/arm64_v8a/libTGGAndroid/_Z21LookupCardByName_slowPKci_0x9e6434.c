// 函数: _Z21LookupCardByName_slowPKci
// 地址: 0x9e6434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*arg1) != 0)
    for (int64_t i = 0; i != 0x12; i += 1)
        DomCardDef* var_58
        int32_t x0_1 = DomExpGet(zx.q(*(&data_1124868 + i * 0x28)), &var_58)
        
        if (x0_1 s>= 1)
            int64_t j = 0
            
            do
                void* x0_2 = var_58 + j
                
                if ((*(x0_2 + 0xc8) & 0x300804720c800) == 0)
                    DomDefName(x0_2, 1, nullptr, false)
                    int32_t x0_5 = strcasecmp(arg1, XString::operator char const*())
                    XString::~XString()
                    
                    if (x0_5 == 0)
                        return zx.q(*(var_58 + j + 0xc0))
                
                j += 0x780
            while (mulu.dp.d(x0_1, 0x780) != j)

return 0
