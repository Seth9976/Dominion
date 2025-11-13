// 函数: _Z21DefinitionReadFileStrPPcPKc
// 地址: 0xfaaf70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = fopen(arg2, "rb")
fseek(fp, 0, 2)
int32_t count_1 = ftell(fp)
fseek(fp, 0, 0)
int64_t count = sx.q(count_1)
char* buf = XMalloc(count_1) + 1
*arg1 = buf
fread(buf, 1, count, fp)
fclose(fp)
(*arg1)[count] = 0
return zx.q(count_1)
