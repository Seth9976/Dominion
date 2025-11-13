// 函数: vorbis_comment_add
// 地址: 0x108cc50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1 = realloc(*arg1, (sx.q(arg1[2].d) << 3) + 0x10)
int64_t x9 = sx.q(arg1[2].d)
int64_t oldmem = arg1[1]
*arg1 = x0_1
int64_t x0_3 = realloc(oldmem, (x9 << 2) + 8)
arg1[1] = x0_3
size_t x0_5 = strlen(arg2)
int64_t x22 = sx.q(arg1[2].d)
*(x0_3 + (x22 << 2)) = x0_5.d
(*arg1)[x22] = malloc((0x100000000 + (x0_5 << 0x20)) s>> 0x20)
int64_t result = strcpy((*arg1)[x22], arg2)
int64_t x8_6 = sx.q(arg1[2].d) + 1
arg1[2].d = x8_6.d
*(*arg1 + (x8_6 << 3)) = 0
return result
