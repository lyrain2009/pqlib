#include "tags.h"

#define declareID(id) extern const GUID id


//  Description:   No compression is used.
//  Version:       1.0
#define ID_COMP_STYLE_NONE 0

//  Description:   The body of each record is compressed individually. The checksums will be found in the header of each record.
//  Version:       1.0
#define ID_COMP_STYLE_RECORDLEVEL 2

//  Description:   Everything after the container record is compressed as a single block. This feature has been deprecated under 1.5 and should not be used.
//  Version:       1.5 Deprecated
#define ID_COMP_STYLE_TOTALFILE 1

//  ==========================================================
//  The following IDs are the legal values for
//  tagCompressionAlgorithmID
//  ==========================================================

//  Description:   No compression algorithm is used.
//  Version:       1.0
#define ID_COMP_ALG_NONE 0

//  Description:   A standard compression algorithm -- ZLIB -- standardized by the IETF (Internet Engineering Task Force). See http://quest.jpl.nasa.gov/zlib/ for details.
//  Version:       1.0
#define ID_COMP_ALG_ZLIB 1

//  Description:   A commercial package, the PKZIP data compression library, was used to compress the data. This feature has been deprecated under 1.5 and should not be used.
//  Version:       1.5 Deprecated
#define ID_COMP_ALG_PKZIPCL 64

declareID( ID_DS_TYPE_MEASURE );
declareID( ID_DS_TYPE_MANUAL );
declareID( ID_DS_TYPE_SIMULATE );
declareID( ID_DS_TYPE_BENCHMARK );
declareID( ID_DS_TYPE_DEBUG );
declareID( ID_VENDOR_NONE );
declareID( ID_VENDOR_A_EBERLE );
declareID( ID_VENDOR_ABB );
declareID( ID_VENDOR_ACTL );
declareID( ID_VENDOR_ADVANTECH );
declareID( ID_VENDOR_ALPESTECHNOLOGIES );
declareID( ID_VENDOR_AMETEK );
declareID( ID_VENDOR_ARBITER );
declareID( ID_VENDOR_BMI );
declareID( ID_VENDOR_BPA );
declareID( ID_VENDOR_CAMILLEBAUER );
declareID( ID_VENDOR_CESI );
declareID( ID_VENDOR_CESINEL );
declareID( ID_VENDOR_COOPER );
declareID( ID_VENDOR_DCG );
declareID( ID_VENDOR_DRANETZ );
declareID( ID_VENDOR_EATON );
declareID( ID_VENDOR_ECAMEC );
declareID( ID_VENDOR_EDF );
declareID( ID_VENDOR_EDMI );
declareID( ID_VENDOR_ELCOM );
declareID( ID_VENDOR_ELECTRO_INDUSTRIES );
declareID( ID_VENDOR_ELECTROTEK );
declareID( ID_VENDOR_ELSPEC );
declareID( ID_VENDOR_EMAX );
declareID( ID_VENDOR_ENERNEX );
declareID( ID_VENDOR_ENTSO_E );
declareID( ID_VENDOR_EPRI );
declareID( ID_VENDOR_FLUKE );
declareID( ID_VENDOR_GE );
declareID( ID_VENDOR_GMC );
declareID( ID_VENDOR_HIOKI );
declareID( ID_VENDOR_HYDROQUEBEC );
declareID( ID_VENDOR_IEEE );
declareID( ID_VENDOR_KREISSJOHNSON );
declareID( ID_VENDOR_LANDIS_GYR );
declareID( ID_VENDOR_LEM );
declareID( ID_VENDOR_MEGGER );
declareID( ID_VENDOR_METONE );
declareID( ID_VENDOR_METROSONIC );
declareID( ID_VENDOR_METRUM );
declareID( ID_VENDOR_NEXANT );
declareID( ID_VENDOR_ORL );
declareID( ID_VENDOR_PMI );
declareID( ID_VENDOR_PML );
declareID( ID_VENDOR_PSI );
declareID( ID_VENDOR_PSL );
declareID( ID_VENDOR_PTI );
declareID( ID_VENDOR_PUBLICDOMAIN );
declareID( ID_VENDOR_QUALITROL );
declareID( ID_VENDOR_RPM );
declareID( ID_VENDOR_SATEC );
declareID( ID_VENDOR_SCHNEIDER_ELECTRIC );
declareID( ID_VENDOR_SEL );
declareID( ID_VENDOR_SIEMENS );
declareID( ID_VENDOR_SOCOMEC );
declareID( ID_VENDOR_SQUAREDPOWERLOGIC );
declareID( ID_VENDOR_SST );
declareID( ID_VENDOR_TELOG );
declareID( ID_VENDOR_TRINERGI );
declareID( ID_VENDOR_UNIPOWER );
declareID( ID_VENDOR_WPT );
declareID( ID_EQUIP_NONE );
declareID( ID_EQUIP_ACUMENTRICS_CONTROL );
declareID( ID_EQUIP_ADVANTECH_ADAM4017 );
declareID( ID_EQUIP_ADVANTECH_ADAM4018 );
declareID( ID_EQUIP_ADVANTECH_ADAM4018M );
declareID( ID_EQUIP_ADVANTECH_ADAM4050 );
declareID( ID_EQUIP_ADVANTECH_ADAM4052 );
declareID( ID_EQUIP_ADVANTECH_ADAM4053 );
declareID( ID_EQUIP_ADVANTECH_ADAM4080 );
declareID( ID_EQUIP_ADVANTECH_ADAM5017 );
declareID( ID_EQUIP_ADVANTECH_ADAM5018 );
declareID( ID_EQUIP_ADVANTECH_ADAM5050 );
declareID( ID_EQUIP_ADVANTECH_ADAM5051 );
declareID( ID_EQUIP_ADVANTECH_ADAM5052 );
declareID( ID_EQUIP_ADVANTECH_ADAM5080 );
declareID( ID_EQUIP_ARBITER_1133A );
declareID( ID_EQUIP_BMI_3100 );
declareID( ID_EQUIP_BMI_7100 );
declareID( ID_EQUIP_BMI_8010 );
declareID( ID_EQUIP_BMI_8020 );
declareID( ID_EQUIP_BMI_8800 );
declareID( ID_EQUIP_BMI_9010 );
declareID( ID_EQUIP_CANDURA_EP600 );
declareID( ID_EQUIP_CANDURA_PQPMU );
declareID( ID_EQUIP_CANDURA_PQPRO );
declareID( ID_EQUIP_CANDURA_PVII );
declareID( ID_EQUIP_CB_PQ3000 );
declareID( ID_EQUIP_CB_PQ5000 );
declareID( ID_EQUIP_COOPER_VFLICKER );
declareID( ID_EQUIP_COOPER_VHARM );
declareID( ID_EQUIP_DCG_EMTP );
declareID( ID_EQUIP_DRANETZ_656 );
declareID( ID_EQUIP_DRANETZ_658 );
declareID( ID_EQUIP_DRANETZ_8000 );
declareID( ID_EQUIP_ELCOM_BK550 );
declareID( ID_EQUIP_ELSPEC_PQSCADA );
declareID( ID_EQUIP_EMAX_DIRECTOR );
declareID( ID_EQUIP_ETK_DSS );
declareID( ID_EQUIP_ETK_HARMONI );
declareID( ID_EQUIP_ETK_NODECENTER );
declareID( ID_EQUIP_ETK_PASS );
declareID( ID_EQUIP_ETK_PQDIFEDITOR );
declareID( ID_EQUIP_ETK_PQDIFFRACTOR );
declareID( ID_EQUIP_ETK_PQVIEW );
declareID( ID_EQUIP_ETK_PQWEB );
declareID( ID_EQUIP_ETK_SUPERHARM );
declareID( ID_EQUIP_ETK_SUPERTRAN );
declareID( ID_EQUIP_ETK_TESTPROGRAM );
declareID( ID_EQUIP_ETK_TEXTPQDIF );
declareID( ID_EQUIP_ETK_TOP );
declareID( ID_EQUIP_EWON_4000 );
declareID( ID_EQUIP_FLUKE_CUR );
declareID( ID_EQUIP_FLUKE_F41 );
declareID( ID_EQUIP_GE_KV );
declareID( ID_EQUIP_GE_KV2 );
declareID( ID_EQUIP_GPT_61000 );
declareID( ID_EQUIP_GPT_ES210 );
declareID( ID_EQUIP_GPT_ES230 );
declareID( ID_EQUIP_IEEE_COMTRADE );
declareID( ID_EQUIP_LANDIS_GYR_MAXCOM );
declareID( ID_EQUIP_LEM_ANALYST1Q );
declareID( ID_EQUIP_LEM_ANALYST2050 );
declareID( ID_EQUIP_LEM_ANALYST2060 );
declareID( ID_EQUIP_LEM_ANALYST3Q );
declareID( ID_EQUIP_LEM_BEN5000 );
declareID( ID_EQUIP_LEM_BEN6000 );
declareID( ID_EQUIP_LEM_EWAVE );
declareID( ID_EQUIP_LEM_EWON4000 );
declareID( ID_EQUIP_LEM_MBX300 );
declareID( ID_EQUIP_LEM_MBX601 );
declareID( ID_EQUIP_LEM_MBX602 );
declareID( ID_EQUIP_LEM_MBX603 );
declareID( ID_EQUIP_LEM_MBX686 );
declareID( ID_EQUIP_LEM_MBX800 );
declareID( ID_EQUIP_LEM_MIDGET200 );
declareID( ID_EQUIP_LEM_PERMA701 );
declareID( ID_EQUIP_LEM_PERMA702 );
declareID( ID_EQUIP_LEM_PERMA705 );
declareID( ID_EQUIP_LEM_PERMA706 );
declareID( ID_EQUIP_LEM_QWAVELIGHT );
declareID( ID_EQUIP_LEM_QWAVEMICRO );
declareID( ID_EQUIP_LEM_QWAVENOMAD );
declareID( ID_EQUIP_LEM_QWAVEPOWER_DISTRIBUTION );
declareID( ID_EQUIP_LEM_QWAVEPOWER_TRANSPORT );
declareID( ID_EQUIP_LEM_QWAVEPREMIUM );
declareID( ID_EQUIP_LEM_QWAVETWIN );
declareID( ID_EQUIP_LEM_TOPAS1000 );
declareID( ID_EQUIP_LEM_TOPAS1019 );
declareID( ID_EQUIP_LEM_TOPAS1020 );
declareID( ID_EQUIP_LEM_TOPAS1040 );
declareID( ID_EQUIP_LEM_TOPASLT );
declareID( ID_EQUIP_MEDCAL );
declareID( ID_EQUIP_METONE_ELT15 );
declareID( ID_EQUIP_METROSONIC_M1 );
declareID( ID_EQUIP_ORL_AP300 );
declareID( ID_EQUIP_ORL_OTHER );
declareID( ID_EQUIP_ORL_PM1000 );
declareID( ID_EQUIP_ORL_PM1200 );
declareID( ID_EQUIP_ORL_PM2000 );
declareID( ID_EQUIP_ORL_PM2200 );
declareID( ID_EQUIP_ORL_PM3000 );
declareID( ID_EQUIP_ORL_PM3006 );
declareID( ID_EQUIP_ORL_PM4000 );
declareID( ID_EQUIP_ORL_PM6000 );
declareID( ID_EQUIP_ORL_PM7000 );
declareID( ID_EQUIP_ORL_RANGER_II );
declareID( ID_EQUIP_ORL_RANGER_III );
declareID( ID_EQUIP_ORL_RANGER_IV );
declareID( ID_EQUIP_ORL_RANGERHA5000 );
declareID( ID_EQUIP_ORL_RANGERMETERSOCKET );
declareID( ID_EQUIP_ORL_RANGERRR1250 );
declareID( ID_EQUIP_ORL_RANGERSCOUT );
declareID( ID_EQUIP_PMI_SCANNER );
declareID( ID_EQUIP_PML_3710 );
declareID( ID_EQUIP_PML_3720 );
declareID( ID_EQUIP_PML_3800 );
declareID( ID_EQUIP_PML_7300 );
declareID( ID_EQUIP_PML_7700 );
declareID( ID_EQUIP_PML_LOGSERVER );
declareID( ID_EQUIP_PML_VIP );
declareID( ID_EQUIP_PQUBE );
declareID( ID_EQUIP_PUBLIC_ATP );
declareID( ID_EQUIP_QUALIMETRE );
declareID( ID_EQUIP_QWAVE_LIGHT );
declareID( ID_EQUIP_QWAVE_MICRO );
declareID( ID_EQUIP_QWAVE_NOMAD );
declareID( ID_EQUIP_QWAVE_POWER_DISTRIBUTION );
declareID( ID_EQUIP_QWAVE_POWER_TRANSMISSION );
declareID( ID_EQUIP_QWAVE_PREMIUM );
declareID( ID_EQUIP_QWAVE_TWIN );
declareID( ID_EQUIP_SQD_SMS );
declareID( ID_EQUIP_SST_IGRID );
declareID( ID_EQUIP_TELOG_M1 );
declareID( ID_EQUIP_TRINERGI_PQM );
declareID( ID_EQUIP_WPT_5510 );
declareID( ID_EQUIP_WPT_5520 );
declareID( ID_EQUIP_WPT_5530 );
declareID( ID_EQUIP_WPT_5530T );
declareID( ID_EQUIP_WPT_5540 );
declareID( ID_EQUIP_WPT_5560 );
declareID( ID_EQUIP_WPT_5590 );
declareID( ID_EQUIP_WPT_DRANVIEW );
declareID( ID_INSTR_TYPE_SCOPE );
declareID( ID_INSTR_TYPE_FR );
declareID( ID_INSTR_TYPE_PQM );
declareID( ID_INSTR_TYPE_VR );
declareID( ID_INSTR_TYPE_SA );

//  Description:   Phase is not applicable.
//  Version:       1.0
#define ID_PHASE_NONE 0

//  Description:   A-to-neutral.
//  Version:       1.0
#define ID_PHASE_AN   1

//  Description:   B-to-neutral.
//  Version:       1.0
#define ID_PHASE_BN   2

//  Description:   C-to-neutral.
//  Version:       1.0
#define ID_PHASE_CN   3

//  Description:   Neutral-to-ground.
//  Version:       1.0
#define ID_PHASE_NG   4

//  Description:   A-to-B.
//  Version:       1.0
#define ID_PHASE_AB   5

//  Description:   B-to-C.
//  Version:       1.0
#define ID_PHASE_BC   6

//  Description:   C-to-A.
//  Version:       1.0
#define ID_PHASE_CA   7

//  Description:   Residual - the vector or point-on-wave sum of Phases A, B, and C.  Should be zero in a perfectly balanced system.
//  Version:       1.0
#define ID_PHASE_RES  8

//  Description:   Net - the vector or point-on-wave sum of Phases A, B, C and the Neutral phase.  Should be zero in a 4 wire system with no earth return path.
//  Version:       1.0
#define ID_PHASE_NET  9

//  Description:   The value representing a total or other summarizing value in a multi-phase system.
//  Version:       1.5
#define ID_PHASE_TOTAL 13

//  Description:   The value representing average of 3 line-neutral values
//  Version:       1.5
#define ID_PHASE_LN_AVE 14

//  Description:   The value representing average of 3 line-line values
//  Version:       1.5
#define ID_PHASE_LL_AVE 15

//  Description:   The value representing the "worst" of the 3 phases
//  Version:       1.5
#define ID_PHASE_WORST 16

//  Description:   DC Positive
//  Version:       1.5
#define ID_PHASE_PLUS 17

//  Description:   DC Negative
//  Version:       1.5
#define ID_PHASE_MINUS 18

//  Description:   Generic Phase 1
//  Version:       1.5
#define ID_PHASE_GENERAL_1 19

//  Description:   Generic Phase 2
//  Version:       1.5
#define ID_PHASE_GENERAL_2 20

//  Description:   Generic Phase 3
//  Version:       1.5
#define ID_PHASE_GENERAL_3 21

//  Description:   Generic Phase 4
//  Version:       1.5
#define ID_PHASE_GENERAL_4 22

//  Description:   Generic Phase 5
//  Version:       1.5
#define ID_PHASE_GENERAL_5 23

//  Description:   Generic Phase 6
//  Version:       1.5
#define ID_PHASE_GENERAL_6 24

//  Description:   Generic Phase 7
//  Version:       1.5
#define ID_PHASE_GENERAL_7 25

//  Description:   Generic Phase 8
//  Version:       1.5
#define ID_PHASE_GENERAL_8 26

//  Description:   Generic Phase 9
//  Version:       1.5
#define ID_PHASE_GENERAL_9 27

//  Description:   Generic Phase 10
//  Version:       1.5
#define ID_PHASE_GENERAL_10 28

//  Description:   Generic Phase 11
//  Version:       1.5
#define ID_PHASE_GENERAL_11 29

//  Description:   Generic Phase 12
//  Version:       1.5
#define ID_PHASE_GENERAL_12 30

//  Description:   Generic Phase 13
//  Version:       1.5
#define ID_PHASE_GENERAL_13 31

//  Description:   Generic Phase 14
//  Version:       1.5
#define ID_PHASE_GENERAL_14 32

//  Description:   Generic Phase 15
//  Version:       1.5
#define ID_PHASE_GENERAL_15 33

//  Description:   Generic Phase 16
//  Version:       1.5
#define ID_PHASE_GENERAL_16 34

//  Description:   The value representing maximum of 3 line-neutral values
//  Version:       1.6
#define ID_PHASE_LN_MAX 36

//  Description:   The value representing minimum of 3 line-neutral values
//  Version:       1.6
#define ID_PHASE_LN_MIN 37

//  Description:   The value representing maximum of 3 line-line values
//  Version:       1.6
#define ID_PHASE_LL_MAX 38

//  Description:   The value representing minimum of 3 line-line values
//  Version:       1.6
#define ID_PHASE_LL_MIN 39

declareID( ID_QT_WAVEFORM );
declareID( ID_QT_VALUELOG );
declareID( ID_QT_PHASOR );
declareID( ID_QT_RESPONSE );
declareID( ID_QT_FLASH );
declareID( ID_QT_HISTOGRAM );
declareID( ID_QT_HISTOGRAM3D );
declareID( ID_QT_CPF );
declareID( ID_QT_XY );
declareID( ID_QT_MAGDUR );
declareID( ID_QT_XYZ );
declareID( ID_QT_MAGDURTIME );
declareID( ID_QT_MAGDURCOUNT );
declareID( ID_DISTURB_1159_NONE );
declareID( ID_DISTURB_1159_TRANSIENT );
declareID( ID_DISTURB_1159_TRANSIENT_IMPULSIVE );
declareID( ID_DISTURB_1159_TRANSIENT_IMPULSIVE_NANO );
declareID( ID_DISTURB_1159_TRANSIENT_IMPULSIVE_MICRO );
declareID( ID_DISTURB_1159_TRANSIENT_IMPULSIVE_MILLI );
declareID( ID_DISTURB_1159_TRANSIENT_OSCILLATORY );
declareID( ID_DISTURB_1159_TRANSIENT_OSCILLATORY_LOWFREQ );
declareID( ID_DISTURB_1159_TRANSIENT_OSCILLATORY_MEDFREQ );
declareID( ID_DISTURB_1159_TRANSIENT_OSCILLATORY_HIGHFREQ );
declareID( ID_DISTURB_1159_SHORTDUR );
declareID( ID_DISTURB_1159_SHORTDUR_INSTANT );
declareID( ID_DISTURB_1159_SHORTDUR_INSTANT_SAG );
declareID( ID_DISTURB_1159_SHORTDUR_INSTANT_SWELL );
declareID( ID_DISTURB_1159_SHORTDUR_MOMENT );
declareID( ID_DISTURB_1159_SHORTDUR_MOMENT_INTERRUPT );
declareID( ID_DISTURB_1159_SHORTDUR_MOMENT_SAG );
declareID( ID_DISTURB_1159_SHORTDUR_MOMENT_SWELL );
declareID( ID_DISTURB_1159_SHORTDUR_TEMP );
declareID( ID_DISTURB_1159_SHORTDUR_TEMP_INTERRUPT );
declareID( ID_DISTURB_1159_SHORTDUR_TEMP_SAG );
declareID( ID_DISTURB_1159_SHORTDUR_TEMP_SWELL );
declareID( ID_DISTURB_1159_LONGDUR );
declareID( ID_DISTURB_1159_LONGDUR_INTERRUPT );
declareID( ID_DISTURB_1159_LONGDUR_SAG );
declareID( ID_DISTURB_1159_LONGDUR_SWELL );
declareID( ID_DISTURB_1159_IMBALANCE );
declareID( ID_DISTURB_1159_POWERFREQVARIATION );
declareID( ID_DISTURB_1159_VOLTAGEFLUCTUATION );
declareID( ID_DISTURB_1159_WAVEDISTORT );
declareID( ID_DISTURB_1159_WAVEDISTORT_DCOFFSET );
declareID( ID_DISTURB_1159_WAVEDISTORT_HARMONIC );
declareID( ID_DISTURB_1159_WAVEDISTORT_INTERHARMONIC );
declareID( ID_DISTURB_1159_WAVEDISTORT_NOTCHING );
declareID( ID_DISTURB_1159_WAVEDISTORT_NOISE );

//  Description:   Unitless.
//  Version:       1.0
#define ID_QU_NONE        0

//  Description:   Seconds -- relative from the beginning time of the observation (using tagTimeStart as the beginning time).
//  Version:       1.0
#define ID_QU_SECONDS     2

//  Description:   Absolute time. Each timestamp in the series must be in absolute time using the TIMESTAMPPQDIF physical type. This is generally *not* recommended, but is acceptible when _VALUELOG is used.
//  Version:       1.0
#define ID_QU_TIMESTAMP   1

//  Description:   The timestamps are in cycles, relative to tagTimeStart.
//  Version:       1.0
#define ID_QU_CYCLES      3

//  Description:   Volts.
//  Version:       1.0
#define ID_QU_VOLTS       6

//  Description:   Amperes.
//  Version:       1.0
#define ID_QU_AMPS        7

//  Description:   Volt-amperes.
//  Version:       1.0
#define ID_QU_VA          8

//  Description:   Watts.
//  Version:       1.0
#define ID_QU_WATTS       9

//  Description:   Volt-amperes reactive.
//  Version:       1.0
#define ID_QU_VARS        10

//  Description:   Ohms.
//  Version:       1.0
#define ID_QU_OHMS        11

//  Description:   Siemens.
//  Version:       1.0
#define ID_QU_SIEMENS     12

//  Description:   Volts per amp.
//  Version:       1.0
#define ID_QU_VOLTSPERAMP 13

//  Description:   Joules.
//  Version:       1.0
#define ID_QU_JOULES      14

//  Description:   Hertz.
//  Version:       1.0
#define ID_QU_HERTZ       15

//  Description:   Celcius.
//  Version:       1.0
#define ID_QU_CELCIUS     16

//  Description:   Degrees of arc.
//  Version:       1.0
#define ID_QU_DEGREES     17

//  Description:   Decibels.
//  Version:       1.0
#define ID_QU_DB          18

//  Description:   Percent.
//  Version:       1.0
#define ID_QU_PERCENT     19

//  Description:   Per-unit.
//  Version:       1.0
#define ID_QU_PERUNIT     20

//  Description:   Number of counts or samples
//  Version:       1.0
#define ID_QU_SAMPLES     21

//  Description:   Energy - var-hours
//  Version:       1.5
#define ID_QU_VARHOURS 22

//  Description:   Energy - Watt-hours
//  Version:       1.5
#define ID_QU_WATTHOURS 23

//  Description:   Energy - VA-hours
//  Version:       1.5
#define ID_QU_VAHOURS 24

//  Description:   Meters/Second
//  Version:       1.5
#define ID_QU_MPS 25

//  Description:   Miles/Hr
//  Version:       1.5
#define ID_QU_MPH 26

//  Description:   Pressure, Bars
//  Version:       1.5
#define ID_QU_BARS 27

//  Description:   Pressure, Pascals
//  Version:       1.5
#define ID_QU_PASCALS 28

//  Description:   Force, Newtons
//  Version:       1.5
#define ID_QU_NEWTONS 29

//  Description:   Torque, Newton Meters
//  Version:       1.5
#define ID_QU_NEWTONMETERS 30

//  Description:   Revolutions/minute
//  Version:       1.5
#define ID_QU_RPM 31

//  Description:   Radians/Second
//  Version:       1.5
#define ID_QU_RADPERSEC 32

//  Description:   Meters
//  Version:       1.5
#define ID_QU_METERS 33

//  Description:   Flux Linkage - Weber Turns
//  Version:       1.5
#define ID_QU_WEBERTURNS 34

//  Description:   Flux Density - Teslas
//  Version:       1.5
#define ID_QU_TESLAS 35

//  Description:   Magnetic Field - Webers
//  Version:       1.5
#define ID_QU_WEBERS 36

//  Description:   Volts/Volts transfer function
//  Version:       1.5
#define ID_QU_VOLTSPERVOLT 37

//  Description:   Amps/Amps transfer function
//  Version:       1.5
#define ID_QU_AMPSPERAMP 38

//  Description:   Impedance Transfer Funtion
//  Version:       1.5
#define ID_QU_AMPSPERVOLT 39

//  Description:   Acceleration in Meters/Second
//  Version:       1.6
#define ID_QU_MPS2 40

//  Description:   Jerk in Meters/Second
//  Version:       1.6
#define ID_QU_MPS3 41

//  Description:   Radians/Second
//  Version:       1.6
#define ID_QU_RADPERSEC2 42

//  Description:   Radians/Second
//  Version:       1.6
#define ID_QU_RADPERSEC3 43

declareID( ID_SERIES_VALUE_TYPE_RMS );
declareID( ID_SERIES_VALUE_TYPE_VAL );
declareID( ID_SERIES_VALUE_TYPE_TIME );
declareID( ID_SERIES_VALUE_TYPE_MIN );
declareID( ID_SERIES_VALUE_TYPE_MAX );
declareID( ID_SERIES_VALUE_TYPE_AVG );
declareID( ID_SERIES_VALUE_TYPE_INST );
declareID( ID_SERIES_VALUE_TYPE_PHASEANGLE );
declareID( ID_SERIES_VALUE_TYPE_PHASEANGLE_MIN );
declareID( ID_SERIES_VALUE_TYPE_PHASEANGLE_MAX );
declareID( ID_SERIES_VALUE_TYPE_PHASEANGLE_AVG );
declareID( ID_SERIES_VALUE_TYPE_AREA );
declareID( ID_SERIES_VALUE_TYPE_LATITUDE );
declareID( ID_SERIES_VALUE_TYPE_DURATION );
declareID( ID_SERIES_VALUE_TYPE_LONGITUDE );
declareID( ID_SERIES_VALUE_TYPE_POLARITY );
declareID( ID_SERIES_VALUE_TYPE_ELLIPSE );
declareID( ID_SERIES_VALUE_TYPE_BINID );
declareID( ID_SERIES_VALUE_TYPE_BINHIGH );
declareID( ID_SERIES_VALUE_TYPE_BINLOW );
declareID( ID_SERIES_VALUE_TYPE_XBINHIGH );
declareID( ID_SERIES_VALUE_TYPE_XBINLOW );
declareID( ID_SERIES_VALUE_TYPE_YBINHIGH );
declareID( ID_SERIES_VALUE_TYPE_YBINLOW );
declareID( ID_SERIES_VALUE_TYPE_COUNT );
declareID( ID_SERIES_VALUE_TYPE_TRANSITION );
declareID( ID_SERIES_VALUE_TYPE_PROB );
declareID( ID_SERIES_VALUE_TYPE_INTERVAL );
declareID( ID_SERIES_VALUE_TYPE_STATUS );
declareID( ID_SERIES_VALUE_TYPE_P1 );
declareID( ID_SERIES_VALUE_TYPE_P5 );
declareID( ID_SERIES_VALUE_TYPE_P10 );
declareID( ID_SERIES_VALUE_TYPE_P90 );
declareID( ID_SERIES_VALUE_TYPE_P95 );
declareID( ID_SERIES_VALUE_TYPE_P99 );
declareID( ID_SERIES_VALUE_TYPE_FREQUENCY );

//  Description:   The data in tagSeriesValues are a straight array of data points.
//  Version:       1.0
#define ID_SERIES_METHOD_VALUES    0x01

//  Description:   All values in tagSeriesValues will be multiplied by tagSeriesScale.
//  Version:       1.0
#define ID_SERIES_METHOD_SCALED 0x02

//  Description:   The data in tagSeriesValues consists of a special sequence to indicate the contents of a regular rate series (see main documentation for details). The vector contains: #rates, numpts1, rate1 ... numptsN, rateN.
//  Version:       1.0
#define ID_SERIES_METHOD_INCREMENT 0x04

//  ==========================================================
//  The following IDs are the legal values for
//  tagHintGreekPrefixID
//  ==========================================================

//  Version:       1.0
#define ID_GREEK_DONTCARE 0

//  Version:       1.0
#define ID_GREEK_FEMTO    1

//  Version:       1.0
#define ID_GREEK_PICO     2

//  Version:       1.0
#define ID_GREEK_NANO     3

//  Version:       1.0
#define ID_GREEK_MICRO    4

//  Version:       1.0
#define ID_GREEK_MILLI    5

//  Version:       1.0
#define ID_GREEK_NONE     6

//  Version:       1.0
#define ID_GREEK_KILO     7

//  Version:       1.0
#define ID_GREEK_MEGA     8

//  Version:       1.0
#define ID_GREEK_TERA 10

//  Version:       1.0
#define ID_GREEK_GIGA     9

//  ==========================================================
//  The following IDs are the legal values for
//  tagHintPreferredUnitsID
//  ==========================================================

//  Version:       1.0
#define ID_PREFER_ENG 1

//  Version:       1.0
#define ID_PREFER_PCT 2

//  Version:       1.0
#define ID_PREFER_PU  3

//  ==========================================================
//  The following IDs are the legal values for
//  tagHintDefaultDisplayID
//  ==========================================================

//  Version:       1.0
#define ID_DEFAULT_DONTCARE 0

//  Version:       1.0
#define ID_DEFAULT_MAG      1

//  Version:       1.0
#define ID_DEFAULT_ANG      2

//  Version:       1.0
#define ID_DEFAULT_REAL     3

//  Version:       1.0
#define ID_DEFAULT_IMAG 4

//  Version:       1.0
#define ID_DEFAULT_RX 5

//  ==========================================================
//  The following IDs are the legal values for
//  tagTriggerTypeID
//  ==========================================================

//  Version:       1.0
#define ID_TRIG_NONE  0x00

//  Version:       1.0
#define ID_TRIG_LOW   0x01

//  Version:       1.0
#define ID_TRIG_HIGH  0x02

//  Version:       1.0
#define ID_TRIG_RATE  0x04

//  Version:       1.0
#define ID_TRIG_SHAPE 0x08

//  Version:       1.0
#define ID_TRIG_OTHER 0x10

//  ==========================================================
//  The following IDs are the legal values for
//  tagXDTransformerTypeID
//  ==========================================================

//  Version:       1.0
#define ID_XFORMER_TYPE_CT 2

//  Version:       1.0
#define ID_XFORMER_TYPE_PT 1

//  ==========================================================
//  The following IDs are the legal values for
//  tagTriggerMethodID
//  ==========================================================

//  Version:       1.0
#define ID_TRIGGER_METH_NONE 0

//  Description:   A specific channel (or channels) caused the trigger; should be used with tagChannelTriggerIdx to specify which channels.
//  Version:       1.0
#define ID_TRIGGER_METH_CHANNEL 1

//  Version:       1.0
#define ID_TRIGGER_METH_PERIODIC 2

//  Version:       1.0
#define ID_TRIGGER_METH_EXTERNAL 3

//  Description:   Periodic Statistical Data
//  Version:       1.5
#define ID_TRIGGER_METH_PERIODIC_STATS 4

declareID( ID_QC_NONE );
declareID( ID_QC_INSTANTANEOUS );
declareID( ID_QC_SPECTRA );
declareID( ID_QC_PEAK );
declareID( ID_QC_RMS );
declareID( ID_QC_HRMS );
declareID( ID_QC_FREQUENCY );
declareID( ID_QC_TOTAL_THD );
declareID( ID_QC_EVEN_THD );
declareID( ID_QC_ODD_THD );
declareID( ID_QC_CREST_FACTOR );
declareID( ID_QC_FORM_FACTOR );
declareID( ID_QC_ARITH_SUM );
declareID( ID_QC_S0S1 );
declareID( ID_QC_S2S1 );
declareID( ID_QC_SPOS );
declareID( ID_QC_SNEG );
declareID( ID_QC_SZERO );
declareID( ID_QC_AVG_IMBAL );
declareID( ID_QC_TOTAL_THD_RMS );
declareID( ID_QC_ODD_THD_RMS );
declareID( ID_QC_EVEN_THD_RMS );
declareID( ID_QC_TID );
declareID( ID_QC_TID_RMS );
declareID( ID_QC_IHRMS );
declareID( ID_QC_SPECTRA_HGROUP );
declareID( ID_QC_SPECTRA_IGROUP );
declareID( ID_QC_DURATION );
declareID( ID_QC_TIME_OFFSET );
declareID( ID_QC_HRMS_ODD );
declareID( ID_QC_HRMS_EVEN );
declareID( ID_QC_HRMS_TRIPLEN );
declareID( ID_QC_THD_TRIPLEN );
declareID( ID_QC_QAXIS );
declareID( ID_QC_DAXIS );
declareID( ID_QC_DAXISFIELD );
declareID( ID_QC_TRANSFERFUNC );
declareID( ID_QC_STATUS );
declareID( ID_QC_TIF );
declareID( ID_QC_FLKR_MAG_AVG );
declareID( ID_QC_FLKR_MAX_DVV );
declareID( ID_QC_FLKR_FREQ_MAX );
declareID( ID_QC_FLKR_MAG_MAX );
declareID( ID_QC_FLKR_WGT_AVG );
declareID( ID_QC_FLKR_SPECTRUM );
declareID( ID_QC_FLKR_PST );
declareID( ID_QC_FLKR_PLT );
declareID( ID_QC_TIF_RMS );
declareID( ID_QC_FLKR_PLTSLIDE );
declareID( ID_QC_FLKR_PILPF );
declareID( ID_QC_FLKR_PIMAX );
declareID( ID_QC_FLKR_PIROOT );
declareID( ID_QC_FLKR_PIROOTLPF );
declareID( ID_QC_FLKR_PINST );
declareID( ID_QC_RVC_DELTA_UMAX );
declareID( ID_QC_RVC_DELTA_USS );
declareID( ID_QC_IT );
declareID( ID_QC_RMS_DEMAND );
declareID( ID_QC_ANSI_TDF );
declareID( ID_QC_K_FACTOR );
declareID( ID_QC_TDD );
declareID( ID_QC_RMS_PEAK_DEMAND );
declareID( ID_QC_P );
declareID( ID_QC_Q );
declareID( ID_QC_S );
declareID( ID_QC_PF );
declareID( ID_QC_DF );
declareID( ID_QC_P_DEMAND );
declareID( ID_QC_Q_DEMAND );
declareID( ID_QC_S_DEMAND );
declareID( ID_QC_DF_DEMAND );
declareID( ID_QC_PF_DEMAND );
declareID( ID_QC_P_PRED_DEMAND );
declareID( ID_QC_Q_PRED_DEMAND );
declareID( ID_QC_S_PRED_DEMAND );
declareID( ID_QC_P_CO_Q_DEMAND );
declareID( ID_QC_P_CO_S_DEMAND );
declareID( ID_QC_Q_CO_P_DEMAND );
declareID( ID_QC_Q_CO_S_DEMAND );
declareID( ID_QC_DF_CO_S_DEMAND );
declareID( ID_QC_PF_CO_S_DEMAND );
declareID( ID_QC_PF_CO_P_DEMAND );
declareID( ID_QC_PF_CO_Q_DEMAND );
declareID( ID_QC_ANGLE_FUND );
declareID( ID_QC_Q_FUND );
declareID( ID_QC_PF_VECTOR );
declareID( ID_QC_DF_VECTOR );
declareID( ID_QC_S_VECTOR );
declareID( ID_QC_S_VECTOR_FUND );
declareID( ID_QC_S_FUND );
declareID( ID_QC_S_CO_P_DEMAND );
declareID( ID_QC_S_CO_Q_DEMAND );
declareID( ID_QC_PF_ARITH );
declareID( ID_QC_DF_ARITH );
declareID( ID_QC_S_ARITH );
declareID( ID_QC_S_ARITH_FUND );
declareID( ID_QC_S_PEAK_DEMAND );
declareID( ID_QC_Q_PEAK_DEMAND );
declareID( ID_QC_P_PEAK_DEMAND );
declareID( ID_QC_P_HARMONIC );
declareID( ID_QC_P_HARMONIC_UNSIGNED );
declareID( ID_QC_P_FUND );
declareID( ID_QC_P_INTG );
declareID( ID_QC_P_INTG_POS );
declareID( ID_QC_P_INTG_POS_FUND );
declareID( ID_QC_P_INTG_NEG );
declareID( ID_QC_P_INTG_NEG_FUND );
declareID( ID_QC_Q_INTG );
declareID( ID_QC_Q_INTG_POS );
declareID( ID_QC_Q_INTG_POS_FUND );
declareID( ID_QC_Q_INTG_NEG_FUND );
declareID( ID_QC_Q_INTG_NEG );
declareID( ID_QC_S_INTG );
declareID( ID_QC_S_INTG_FUND );
declareID( ID_QC_P_IVL_INTG );
declareID( ID_QC_P_IVL_INTG_POS );
declareID( ID_QC_P_IVL_INTG_POS_FUND );
declareID( ID_QC_P_IVL_INTG_NEG );
declareID( ID_QC_P_IVL_INTG_NEG_FUND );
declareID( ID_QC_Q_IVL_INTG );
declareID( ID_QC_Q_IVL_INTG_POS );
declareID( ID_QC_Q_IVL_INTG_POS_FUND );
declareID( ID_QC_Q_IVL_INTG_NEG_FUND );
declareID( ID_QC_Q_IVL_INTG_NEG );
declareID( ID_QC_S_IVL_INTG );
declareID( ID_QC_S_IVL_INTG_FUND );
declareID( ID_QC_LINEAR );
declareID( ID_QC_VELOCITY );
declareID( ID_QC_ACCELERATION );
declareID( ID_QC_JERK );
declareID( ID_QC_ROTATIONAL );
declareID( ID_QC_TEMPERATURE );
declareID( ID_QC_REL_HUMIDITY );

//  Description:   Humidity, or the amount of water vapor in the air
//  Version:       1.0
#define ID_QM_HUMIDITY 18

//  Description:   None or not applicable.
//  Version:       1.5
#define ID_QM_NONE 0

//  Description:   Voltage.
//  Version:       1.5
#define ID_QM_VOLTAGE 1

//  Description:   Current.
//  Version:       1.5
#define ID_QM_CURRENT 2

//  Description:   Power - includes all data for a quantity or characteristic derived from multiplying voltage and current components.
//  Version:       1.5
#define ID_QM_POWER 3

//  Description:   Energy - includes all data from an integration of a quantity or characteristic derived from multiplying voltage and current components together.
//  Version:       1.5
#define ID_QM_ENERGY 4

//  Description:   Temperature.
//  Version:       1.5
#define ID_QM_TEMPERATURE 5

//  Description:   Pressure.
//  Version:       1.5
#define ID_QM_PRESSURE 6

//  Description:   Charge.
//  Version:       1.5
#define ID_QM_CHARGE 7

//  Description:   Electrical field.
//  Version:       1.5
#define ID_QM_EFIELD 8

//  Description:   Magnetic field.
//  Version:       1.5
#define ID_QM_MFIELD 9

//  Description:   Velocity
//  Version:       1.5
#define ID_QM_VELOCITY 10

//  Description:   Compass Bearing
//  Version:       1.5
#define ID_QM_BEARING 11

//  Description:   Applied Force, Electrical, Mechanical, etc.
//  Version:       1.5
#define ID_QM_FORCE 12

//  Description:   Torque
//  Version:       1.5
#define ID_QM_TORQUE 13

//  Description:   Spacial Position
//  Version:       1.5
#define ID_QM_POSITION 14

//  Description:   Flux linkage Weber Turns
//  Version:       1.5
#define ID_QM_FLUXLINKAGE 15

//  Description:   Magnetic field Density
//  Version:       1.5
#define ID_QM_FLUXDENSITY 16

//  Description:   Status Data
//  Version:       1.5
#define ID_QM_STATUS 17

//  ==========================================================
//  The following IDs are the legal values for
//  tagChanTriggerTypeID
//  ==========================================================

//  Description:   No transition - should not happen
//  Version:       1.5
#define ID_CTT_NONE 0

//  Description:   Normal to low transition
//  Version:       1.5
#define ID_CTT_NORMAL_TO_LO 1

//  Description:   Normal to low low transition
//  Version:       1.5
#define ID_CTT_NORMAL_TO_LO_LO 2

//  Description:   Normal to High transition
//  Version:       1.5
#define ID_CTT_NORMAL_TO_HI 3

//  Description:   Normal to High High transition
//  Version:       1.5
#define ID_CTT_NORMAL_TO_HI_HI 4

//  Description:   Low Low to Lo transition
//  Version:       1.5
#define ID_CTT_LO_LO_TO_LO 5

//  Description:   Low Low to Normal transition
//  Version:       1.5
#define ID_CTT_LO_LO_TO_NORMAL 6

//  Description:   Low Low to High transition
//  Version:       1.5
#define ID_CTT_LO_LO_TO_HI 7

//  Description:   Low Low to High High transition
//  Version:       1.5
#define ID_CTT_LO_LO_TO_HI_HI 8

//  Description:   Low to Low Low transition
//  Version:       1.5
#define ID_CTT_LO_TO_LO_LO 9

//  Description:   Low to Normal transition
//  Version:       1.5
#define ID_CTT_LO_TO_NORMAL 10

//  Description:   Low to High transition
//  Version:       1.5
#define ID_CTT_LO_TO_HI 11

//  Description:   Low to High High transition
//  Version:       1.5
#define ID_CTT_LO_TO_HI_HI 12

//  Description:   High to Low Low transition
//  Version:       1.5
#define ID_CTT_HI_TO_LO_LO 13

//  Description:   High to Low transition
//  Version:       1.5
#define ID_CTT_HI_TO_LO 14

//  Description:   High to Normal transition
//  Version:       1.5
#define ID_CTT_HI_TO_NORMAL 15

//  Description:   High to High High transition
//  Version:       1.5
#define ID_CTT_HI_TO_HI_HI 16

//  Description:   High High to Low Low transition
//  Version:       1.5
#define ID_CTT_HI_HI_TO_LO_LO 17

//  Description:   High High to Low transition
//  Version:       1.5
#define ID_CTT_HI_HI_TO_LO 18

//  Description:   High High to Normal transition
//  Version:       1.5
#define ID_CTT_HI_HI_TO_NORMAL 19

//  Description:   High High to High transition
//  Version:       1.5
#define ID_CTT_HI_HI_TO_HI 20

//  Description:   Deadband transition lower
//  Version:       1.5
#define ID_CTT_DB_LO 21

//  Description:   Deadband transition higher
//  Version:       1.5
#define ID_CTT_DB_HI 22

//  Description:   Hardware initiated trigger based on periodic trigger rule
//  Version:       1.5
#define ID_CTT_PERIODIC 23

//  Description:   User commanded sample - button was pushed
//  Version:       1.5
#define ID_CTT_MANUAL 24

//  Description:   Channel triggered because of internal cross-trigger rule.  tagCrossTriggerChanIdx is index of channel that triggered.
//  Version:       1.5
#define ID_CTT_INT_CROSS_TRIG 25

//  Description:   Channel triggered because of external cross-trigger rule.  tagCrossTriggerChanIdx is index of channel that triggered on external device.  tagCrossTriggerDeviceName is the name of the external device that initiated the cross trigger.
//  Version:       1.5
#define ID_CTT_EXT_CROSS_TRIG 26

//  Description:   Channel triggered because of hardware or software module, rule or algorithm
//  Version:       1.5
#define ID_CTT_MODULE 27

//  Description:   Rate of change threshold exceeded (dV/dt or dI/dt)
//  Version:       1.5
#define ID_CTT_RATE 28

//  ==========================================================
//  The following IDs are the legal values for
//  tagSettingPhysicalConnection
//  ==========================================================

//  Description:   Single phase connection, 1 voltage, 1 current
//  Version:       1.5
#define ID_SINGLE_PHASE 1

//  Description:   Delta Connected 2 Element Monitoring
//  Version:       1.5
#define ID_2ELEMENT_DELTA 2

//  Description:   Wye 2 Voltages, 3 Currents
//  Version:       1.5
#define ID_2_5ELEMENT_WYE 3

//  Description:   3 Voltages, 3 Currents
//  Version:       1.5
#define ID_3ELMENT_WYE 4

//  Description:   Delta Connection, 3 voltages, 3 currents
//  Version:       1.5
#define ID_3ELEMENT_DELTA 5

//  Description:   Split Single Phase,  2 Volage, 2 Current
//  Version:       1.5
#define ID_SPLIT_PHASE 6

//  Description:   2 Phase, 2 Voltages, 2 Currents
//  Version:       1.5
#define ID_2ELEMENT_2PHASE 7
