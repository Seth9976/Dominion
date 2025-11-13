// 函数: _Z15VersionUI2AssetP12DefParseTreeii
// 地址: 0x100eb40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 != arg3)
    DefParseTree* var_28
    
    if (arg3 != 1)
        if (arg2 == 0)
            void* x0_12 = XMalloc(DefinitionGetSize(*macro_ptr_UI2Def))
            DefinitionFillBlockWithDefaults(x0_12, *macro_ptr_UI2Def)
            DefParseReadBlockNoVersion(x0_12, *macro_ptr_UI2Def, arg1)
            VersionUI2Asset_V0_V1(x0_12)
            var_28 = DefParseTreeMakeFromDefinition(x0_12, *macro_ptr_UI2Def)
            DefParseTreeReplace(arg1, &var_28)
            DefinitionDeleteBlock(x0_12, *macro_ptr_UI2Def)
        
        pthread_kill(pthread_self(), 6)
        return UI2StateDeclTryLookup(XNoReturn()) __tailcall
    
    if (arg2 != 0)
        pthread_kill(pthread_self(), 6)
        return UI2StateDeclTryLookup(XNoReturn()) __tailcall
    
    void* x0_2 = XMalloc(DefinitionGetSize(*macro_ptr_UI2Def))
    DefinitionFillBlockWithDefaults(x0_2, *macro_ptr_UI2Def)
    DefParseReadBlockNoVersion(x0_2, *macro_ptr_UI2Def, arg1)
    VersionUI2Asset_V0_V1(x0_2)
    var_28 = DefParseTreeMakeFromDefinition(x0_2, *macro_ptr_UI2Def)
    DefParseTreeReplace(arg1, &var_28)
    DefinitionDeleteBlock(x0_2, *macro_ptr_UI2Def)

return 1
