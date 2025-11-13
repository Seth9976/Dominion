// 函数: _Z43Landmod_Landmark_Aqueduct_8VP_All_Treasuresv
// 地址: 0xa32188
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = 7
void* x0 = DomGetContext()
int64_t result

do
    int32_t* x0_2 = DomBoardPile(*(x0 + 8), i)
    result = CardIs(*(x0 + 8), zx.q(*x0_2), 2)
    
    if ((result.d & 1) != 0)
        result = AddTokens(0x601, zx.q(i), 8, 0)
    
    i += 1
while (i != 0x48)

return result
