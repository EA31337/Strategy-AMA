/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_AMA_Params_H1 : IndiAMAParams {
  Indi_AMA_Params_H1() : IndiAMAParams(indi_ama_defaults, PERIOD_H1) { shift = 0; }
} indi_ama_h1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_AMA_Params_H1 : StgParams {
  // Struct constructor.
  Stg_AMA_Params_H1() : StgParams(stg_ama_defaults) {}
} stg_ama_h1;
