// 函数: spSkin_dispose
// 地址: 0xfb6028
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_2 = arg1[5]

if (i_2 != 0)
    void* i
    
    do
        i = *(i_2 + 0x18)
        spAttachment_dispose(*(i_2 + 0x10))
        _spFree(*(i_2 + 8))
        _spFree(i_2)
        i_2 = i
    while (i != 0)

int32_t i_1 = 0
void* x21_1 = &arg1[6]

do
    void* j_1 = *x21_1
    
    if (j_1 != 0)
        void* j
        
        do
            j = *(j_1 + 8)
            _spFree()
            j_1 = j
        while (j != 0)
    
    i_1 += 1
    x21_1 += 8
while (i_1 != 0x64)

void* x20 = arg1[1]
_spFree(*(x20 + 8))
_spFree(x20)
void* x20_1 = arg1[2]
_spFree(*(x20_1 + 8))
_spFree(x20_1)
void* x20_2 = arg1[3]
_spFree(*(x20_2 + 8))
_spFree(x20_2)
void* x20_3 = arg1[4]
_spFree(*(x20_3 + 8))
_spFree(x20_3)
_spFree(*arg1)
return _spFree(arg1) __tailcall
