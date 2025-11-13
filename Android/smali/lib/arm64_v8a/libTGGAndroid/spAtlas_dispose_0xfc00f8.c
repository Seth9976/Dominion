// 函数: spAtlas_dispose
// 地址: 0xfc00f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_2 = *arg1

if (i_2 != 0)
    void* i
    
    do
        i = *(i_2 + 0x38)
        _spAtlasPage_disposeTexture()
        _spFree(*(i_2 + 8))
        _spFree(i_2)
        i_2 = i
    while (i != 0)

int64_t* i_3 = arg1[1]

if (i_3 != 0)
    int64_t* i_1
    
    do
        i_1 = i_3[0xc]
        _spFree(*i_3)
        _spFree(i_3[9])
        _spFree(i_3[0xa])
        _spFree(i_3)
        i_3 = i_1
    while (i_1 != 0)

return _spFree(arg1) __tailcall
