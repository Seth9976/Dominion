// 函数: _Z18DefinitionReadFilePPhPKc
// 地址: 0xfab008
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = fopen(arg2, "rb")
fseek(fp, 0, 2)
int32_t x0_2 = ftell(fp)
fseek(fp, 0, 0)
uint8_t* buf = XMalloc(x0_2)
*arg1 = buf
fread(buf, 1, sx.q(x0_2), fp)
fclose(fp)
return zx.q(x0_2)
