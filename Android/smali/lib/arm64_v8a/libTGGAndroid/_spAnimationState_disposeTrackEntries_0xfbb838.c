// 函数: _spAnimationState_disposeTrackEntries
// 地址: 0xfbb838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 == 0)
    return 

void* i_1 = arg2
void* i

do
    i = *(i_1 + 8)
    void* j_1 = *(i_1 + 0x10)
    
    if (j_1 != 0)
        void* j
        
        do
            int64_t x8_3 = *(i_1 + 0x20)
            j = *(j_1 + 0x10)
            
            if (x8_3 != 0)
                x8_3(arg1, 4, j_1, 0)
            
            int64_t x8_4 = *(arg1 + 0x18)
            
            if (x8_4 != 0)
                x8_4(arg1, 4, j_1, 0)
            
            spIntArray_dispose(*(j_1 + 0x80))
            void* x22_1 = *(j_1 + 0x88)
            _spFree(*(x22_1 + 8))
            _spFree(x22_1)
            _spFree(*(j_1 + 0x90))
            _spFree(j_1)
            j_1 = j
        while (j != 0)
    
    int64_t x8_1 = *(i_1 + 0x20)
    
    if (x8_1 != 0)
        x8_1(arg1, 4, i_1, 0)
    
    int64_t x8_2 = *(arg1 + 0x18)
    
    if (x8_2 != 0)
        x8_2(arg1, 4, i_1, 0)
    
    spIntArray_dispose(*(i_1 + 0x80))
    void* x21_1 = *(i_1 + 0x88)
    _spFree(*(x21_1 + 8))
    _spFree(x21_1)
    _spFree(*(i_1 + 0x90))
    _spFree(i_1)
    i_1 = i
while (i != 0)
