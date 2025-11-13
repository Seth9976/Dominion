// 函数: _Z10DomMapInitv
// 地址: 0xc1422c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = XPooledCalloc(0x21b140)
__builtin_memset(x0 + 0x5028, 0, 0x58)
*(x0 + 0x21b110) = zx.o(0)
*(gMapGlobals + 0x90) = x0
MutexInit(gMapGlobals + 0x40)
MutexInit(gMapGlobals + 0x68)
int128_t* x20 = *(gMapGlobals + 0x90) + 0x21b0f8
*x20 = zx.o(0)
x20[1].q = 0x400
int64_t* x0_3 = XMalloc(0x6008)
*x0_3 = *(x20 + 8)
int32_t x9 = x20[1].d
void* x8_3 = *x20
*(x20 + 8) = x0_3

if (x9 s>= 1)
    int64_t i = 0
    void* x9_1 = &x0_3[1]
    
    do
        void* x11_1 = x9_1
        *x9_1 = x8_3
        x9_1 += 0x18
        i += 1
        x8_3 = x11_1
    while (i s< sx.q(x20[1].d))
    
    x8_3 = x9_1 - 0x18

*x20 = x8_3
__builtin_memcpy(x20 + 0x28, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x80\x3f\x0a\xd7\x23\x3d\x0a\xd7\x23\x3d\x"
"32\x00\x00\x00\x19\x00\x00\x00", 
    0x20)
int64_t x0_4 = XPooledCalloc(0x2710)
*(x20 + 0x18) = x0_4
x20[2].q = 0x4e200000000
memset(x0_4, 0, 0x2710)
x20[2].d += 0x4e2
int64_t result = XMalloc(0xa230)
*gMapGlobals = result
*(gMapGlobals + 0xc) = 2
*(gMapGlobals + 0x20) = "complete maps"
*(gMapGlobals + 0x18) = 0xd950
return result
