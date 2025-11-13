// 函数: spAnimationStateData_dispose
// 地址: 0xfacdd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_1 = *(arg1 + 0x10)

if (i_1 != 0)
    void* i
    
    do
        void* j_1 = *(i_1 + 8)
        
        if (j_1 != 0)
            void* j
            
            do
                j = *(j_1 + 0x10)
                _spFree()
                j_1 = j
            while (j != 0)
        
        i = *(i_1 + 0x10)
        _spFree(i_1)
        i_1 = i
    while (i != 0)

return _spFree(arg1) __tailcall
