// 函数: spSlot_create
// 地址: 0xfb77c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 = _spCalloc(1, 0x48, "..\..\ExternalCode\spine-c\src\spine\Slot.c", 0x27)
*result = arg1
result[1] = arg2
v0.d = fconvert.s(1f)
v1.d = fconvert.s(1f)
v2.d = fconvert.s(1f)
v3.d = fconvert.s(1f)
spColor_setFromFloats(&result[2], v0, v1, v2, v3)
int64_t x0_1

if (*(arg1 + 0x30) == 0)
    x0_1 = 0
else
    x0_1 = spColor_create()

int64_t x8_1 = *result
result[4] = x0_1
spColor_setFromColor(&result[2], x8_1 + 0x20)
int64_t x0_3 = result[4]

if (x0_3 != 0)
    spColor_setFromColor(x0_3, *(*result + 0x30))

int32_t* x8_3 = *result
int64_t x2 = *(x8_3 + 0x18)
void* x8_4

if (x2 != 0)
    int64_t x0_5 = spSkeleton_getAttachmentForSlotIndex(*(result[1] + 8), zx.q(*x8_3), x2)
    result[5] = 0
    
    if (x0_5 != 0)
        x8_4 = result[1]
        result[5] = x0_5
        goto label_fb788c
else if (result[5] != 0)
    x8_4 = result[1]
    result[5] = 0
label_fb788c:
    int32_t v0_1 = *(*(x8_4 + 8) + 0x80)
    *(result + 0x34) = 0
    result[8].d = v0_1
return result
