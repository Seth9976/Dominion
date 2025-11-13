// 函数: _Z16AssetPtrFromPathPKc9AssetType
// 地址: 0xc76634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = *gpAssetAppData

if (x21 == 0)
    int64_t* x0 = XPooledCalloc(0x40)
    *x0 = 0
    x0[1] = 0
    *gpAssetAppData = x0
    x0[2] = 0
    x0[3] = 0
    x0[4] = 0x400
    int64_t* x0_1 = XMalloc(0xc008)
    *x0_1 = x0[3]
    int32_t x9_1 = x0[4].d
    x0[3] = x0_1
    void* x8_2 = x0[2]
    
    if (x9_1 s>= 1)
        int64_t i = 0
        void* x10_1 = &x0_1[1]
        
        do
            void* x11_1 = x10_1
            *x10_1 = x8_2
            x10_1 += 0x30
            i += 1
            x8_2 = x11_1
        while (i s< sx.q(x0[4].d))
        
        x8_2 = x10_1 - 0x30
    
    x0[2] = x8_2
    int64_t* x21_2 = *gpAssetAppData
    *x21_2 = XPooledCalloc(0x2000)
    x21_2[1].d = 0x3ff
    x21 = *gpAssetAppData
    *(x21 + 0x28) = 1
    *(x21 + 0x30) = 0
    *(x21 + 0x38) = 0
    
    if (zx.d(*arg1) != 0)
        goto label_c76728
else if (zx.d(*arg1) != 0)
label_c76728:
    
    if (strstr(arg1, "./") != 0)
        goto label_c76784
    
    if (strstr(arg1, ".\") != 0)
    label_c76774:
        x21 = *gpAssetAppData
    label_c76784:
        
        if ((MatchesExclusions(arg1, *(x21 + 0x30), *(x21 + 0x38)) & 1) != 0)
            pthread_kill(pthread_self(), 6)
            int64_t* x0_35 = XNoReturn()
            XString::~XString()
            XString::~XString()
            sub_1101e04(x0_35)
            noreturn
        
        char var_38
        XString::XString(&var_38)
        void* result = AssetPtrFromPathDontCreate(&var_38)
        XString::~XString()
        
        if (result == 0)
            AssetTypeFromPath(arg1)
            uint64_t x22_3 = *gpAssetAppData
            result = *(x22_3 + 0x10)
            *(x22_3 + 0x24) += 1
            
            if (result == 0)
                int64_t* x0_17 = XMalloc(8 | (0xfffffff & (*(x22_3 + 0x20) * 3)) << 4)
                *x0_17 = *(x22_3 + 0x18)
                int32_t x8_11 = *(x22_3 + 0x20)
                result = *(x22_3 + 0x10)
                *(x22_3 + 0x18) = x0_17
                
                if (x8_11 s>= 1)
                    int64_t i_1 = 0
                    void* result_2 = &x0_17[1]
                    
                    do
                        void* result_1 = result_2
                        *result_2 = result
                        result_2 += 0x30
                        i_1 += 1
                        result = result_1
                    while (i_1 s< sx.q(*(x22_3 + 0x20)))
                    
                    result = result_2 - 0x30
                
                *(x22_3 + 0x10) = result
            
            *(x22_3 + 0x10) = *result
            *(result + 0x10) = zx.o(0)
            *(result + 0x20) = zx.o(0)
            *result = zx.o(0)
            XString::XString()
            XString::XString()
            *(result + 8) = arg2
            XString::operator=(result + 0x10)
            char var_50
            XString::XString(&var_50)
            AssetPathNormalize(&var_50)
            XString::operator=(result + 0x28)
            XString::~XString()
            XString::~XString()
            *(result + 0xc) = 0
            int64_t* x19_1 = *gpAssetAppData
            int32_t x0_25 = XHashKey(result + 0x28)
            
            for (void* i_2 = *(*x19_1 + ((zx.q(x19_1[1].d) & zx.q(x0_25)) << 3)); i_2 != 0; 
                    i_2 = *(i_2 + 0x10))
                if ((XString::operator!=(result + 0x28) & 1) == 0)
                    break
            
            void*** x20_1 = *gpAssetAppData
            int32_t x0_29 = XHashKey(result + 0x28)
            uint64_t x23_3 = zx.q(x20_1[1].d) & zx.q(x0_29)
            void* x19_2 = (*x20_1)[zx.q(x23_3.d)]
            
            if (x19_2 == 0)
            label_c76920:
                XString* x0_32 = XPooledMalloc(0x18)
                XString::XString(x0_32)
                *(x0_32 + 8) = result
                *(x0_32 + 0x10) = (*x20_1)[x23_3]
                (*x20_1)[x23_3] = x0_32
                *(x20_1 + 0xc) += 1
            else
                while (true)
                    if ((XString::operator==(result + 0x28) & 1) != 0)
                        *(x19_2 + 8) = result
                        break
                    
                    x19_2 = *(x19_2 + 0x10)
                    
                    if (x19_2 == 0)
                        goto label_c76920
        
        return result
    
    char* s1 = strrchr(arg1, 0x2e)
    int32_t x0_8
    
    if (s1 != 0)
        x0_8 = strcasecmp(s1, ".xpack")
    
    if (s1 != 0 && x0_8 == 0)
        goto label_c76774
    
    AssetTypeFromPath(arg1)
    
    if (zx.d(*arg1) != 0)
        goto label_c76774

return nullptr
