// 函数: _Z13ClearBindingsR9AttribMap
// 地址: 0x10119f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 s< 1)
    return 

int64_t i = 0
AttribMap& var_70_1 = arg1

do
    int64_t x19_1 = *(arg1 + 8)
    uint32_t* x25_1 = x19_1 + (i << 4)
    
    if (AttribTagGetDefMap(*gUI2AttribTable, *x25_1) == *macro_ptr_UI2ExprTreeDef)
        void* x19_4 = *(x25_1 + 8)
        int32_t x8_14 = *(x19_4 + 8)
        
        if (x8_14 != 0)
            uint64_t x9_6 = zx.q(x8_14.w)
            
            if (x9_6.d u< *(gUI2 + 0x30))
                int64_t x10_6 = *(gUI2 + 0x28)
                
                if (*(x10_6 + x9_6 * 0x438 + 0x430) == x8_14)
                    void* x25_2 = x10_6 + x9_6 * 0x438
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    XString::~XString()
                    int32_t x9_7 = *(gUI2 + 0x38)
                    *(gUI2 + 0x38) = zx.d(*(x25_2 + 0x430))
                    *(x25_2 + 0x430) = x9_7
                    *(gUI2 + 0x3c) -= 1
        
        *(x19_4 + 8) = 0
    else if (AttribTagGetDefMap(*gUI2AttribTable, *x25_1) == *macro_ptr_UI2StateOverrides)
        int64_t* x27_1 = *(x19_1 + (i << 4) + 8)
        int32_t x9_1 = x27_1[1].d
        
        if (x9_1 s>= 1)
            int64_t x8_6 = *x27_1
            int64_t j = 0
            
            do
                if (*(x8_6 + j * 0x30 + 0x18) s>= 1)
                    int64_t fp_1 = 0
                    int64_t k = 0
                    
                    do
                        uint32_t* x19_2 = *(x8_6 + j * 0x30 + 0x20)
                        
                        if (AttribTagGetDefMap(*gUI2AttribTable, *(x19_2 + fp_1))
                                == *macro_ptr_UI2ExprTreeDef)
                            void* x19_3 = *(x19_2 + fp_1 + 8)
                            int32_t x8_10 = *(x19_3 + 8)
                            
                            if (x8_10 != 0)
                                uint64_t x9_4 = zx.q(x8_10.w)
                                
                                if (x9_4.d u< *(gUI2 + 0x30))
                                    int64_t x10_4 = *(gUI2 + 0x28)
                                    
                                    if (*(x10_4 + x9_4 * 0x438 + 0x430) == x8_10)
                                        void* x20_2 = x10_4 + x9_4 * 0x438
                                        XString::~XString()
                                        XString::~XString()
                                        XString::~XString()
                                        XString::~XString()
                                        int32_t x9_5 = *(gUI2 + 0x38)
                                        *(gUI2 + 0x38) = zx.d(*(x20_2 + 0x430))
                                        *(x20_2 + 0x430) = x9_5
                                        *(gUI2 + 0x3c) -= 1
                            
                            *(x19_3 + 8) = 0
                        
                        x8_6 = *x27_1
                        k += 1
                        fp_1 += 0x10
                    while (k s< sx.q(*(x8_6 + j * 0x30 + 0x18)))
                    
                    x9_1 = x27_1[1].d
                
                j += 1
            while (j s< sx.q(x9_1))
    
    arg1 = var_70_1
    i += 1
while (i s< sx.q(*arg1))
