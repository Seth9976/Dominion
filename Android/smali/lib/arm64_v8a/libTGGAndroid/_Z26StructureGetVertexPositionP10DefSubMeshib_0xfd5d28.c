// 函数: _Z26StructureGetVertexPositionP10DefSubMeshib
// 地址: 0xfd5d28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8

if ((arg3.d & 1) == 0)
    int32_t x8_2 = *(arg1 + 0x10) - 4
    
    if (x8_2 u>= 0xb || (0x437 u>> x8_2 & 1) == 0)
        pthread_kill(pthread_self(), 6)
        DefVertexPosNormColTexBone* x0_1
        Mat4* x1
        x0_1, x1 = XNoReturn()
        return StructureGetAnimatedVertexPosition(x0_1, x1) __tailcall
    
    x8 = *(&data_8664a0 + (sx.q(x8_2) << 3))
else
    x8 = 0x34

int32_t* x8_3 = *(arg1 + 0x20) + sx.q(arg2) * x8
int128_t v1
v1.d = x8_3[1]
int128_t v2
v2.d = x8_3[2]
int128_t v0
v0.d = *x8_3
