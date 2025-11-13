// 函数: _Z18InputDisposeForAppv
// 地址: 0xf746c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

mutex_destroy(*(*gInputGameGlobals + 0x18))
int64_t* x21 = *gInputGameGlobals
void* x22_1 = &x21[4]
void* i_3 = *x22_1
int64_t result
void* i

if (i_3 == 0)
    __builtin_memset(x22_1, 0, 0x14)
    __builtin_memset(&x21[4], 0, 0x14)
    i = *x21
    
    if (i != 0)
    label_f7477c:
        
        do
            void* i_5 = i
            i = *(i + 0x28)
            XString::~XString()
            XPooledFree(i_5, 0x38)
        while (i != 0)
        
        goto label_f74780
    
label_f74780:
    __builtin_memset(x21, 0, 0x14)
    result = XPooledFree(*gInputGameGlobals, 0x48)
    *gInputGameGlobals = 0
else
    void* i_1
    
    do
        i_1 = *(i_3 + 0x28)
        XString::~XString()
        result = XPooledFree(i_3, 0x38)
        i_3 = i_1
    while (i_1 != 0)
    x21 = *gInputGameGlobals
    __builtin_memset(x22_1, 0, 0x14)
    
    if (x21 != 0)
        void* i_2 = x21[4]
        
        while (i_2 != 0)
            void* i_4 = i_2
            i_2 = *(i_2 + 0x28)
            XString::~XString()
            XPooledFree(i_4, 0x38)
        
        __builtin_memset(&x21[4], 0, 0x14)
        i = *x21
        
        if (i == 0)
            goto label_f74780
        
        goto label_f7477c
return result
