// 函数: _Z35SetLanguageIgnoreMachineTranslationb
// 地址: 0xf77b68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = 0
uint64_t x23 = *gTranslations
*(x23 + 0x2a4) = arg1 & 1

while (true)
    int64_t x9_1 = x23 + (x21 << 4)
    int32_t i = 0
    
    do
        int64_t x9_2 = *(x9_1 + 0x150)
        uint64_t i_1 = zx.q(i)
        void* j_1 = *(x9_2 + (zx.q(i) << 3))
        
        if (j_1 != 0)
            void* j
            
            do
                j = *(j_1 + 0x30)
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XPooledFree(j_1, 0x38)
                j_1 = j
            while (j != 0)
            x9_2 = *(x9_1 + 0x150)
        
        *(x9_2 + (i_1 << 3)) = 0
        i = i_1.d + 1
    while (i u<= *(x9_1 + 0x158))
    
    int64_t x8_1 = x23 + (x21 << 4)
    x21 += 1
    *(x8_1 + 0x15c) = 0
    
    if (x21 == 0x15)
        break
    
    x23 = *gTranslations
