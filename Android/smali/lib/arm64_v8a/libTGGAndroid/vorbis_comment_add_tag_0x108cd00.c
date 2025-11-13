// 函数: vorbis_comment_add_tag
// 地址: 0x108cd00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0_5 = malloc(strlen(arg2) + strlen(arg3) + 2)
strcpy(x0_5, arg2)
*(x0_5 + strlen(x0_5)) = 0x3d
strcat(x0_5, arg3)
int64_t x0_10 = realloc(*arg1, (sx.q(arg1[2].d) << 3) + 0x10)
int64_t x9 = sx.q(arg1[2].d)
int64_t oldmem = arg1[1]
*arg1 = x0_10
int64_t x0_12 = realloc(oldmem, (x9 << 2) + 8)
arg1[1] = x0_12
size_t x0_14 = strlen(x0_5)
int64_t x22_1 = sx.q(arg1[2].d)
*(x0_12 + (x22_1 << 2)) = x0_14.d
(*arg1)[x22_1] = malloc((0x100000000 + (x0_14 << 0x20)) s>> 0x20)
strcpy((*arg1)[x22_1], x0_5)
int64_t x8_7 = sx.q(arg1[2].d) + 1
arg1[2].d = x8_7.d
*(*arg1 + (x8_7 << 3)) = 0
return free(x0_5) __tailcall
