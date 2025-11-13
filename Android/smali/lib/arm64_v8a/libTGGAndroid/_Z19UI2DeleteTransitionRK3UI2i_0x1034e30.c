// 函数: _Z19UI2DeleteTransitionRK3UI2i
// 地址: 0x1034e30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AttribMap* x0 = GetEdittedMap(arg1, 0x71)
*(arg1 + 0x1368) = 0
PropDef var_1030
int32_t var_24
GetPropDefs(arg1, &var_1030, &var_24)
DefinitionVariableArrayDeleteItem(
    AttribMapGetDef(*gUI2AttribTable, x0, *macro_ptr_UI2Transition, 0x71), 
    DefFindField(*macro_ptr_UI2Transition, 8), (arg2 - var_24) s/ 5, nullptr)
return UI2CreateUndoCheckpoint(true)
