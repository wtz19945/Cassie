/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fast_MPCV30_form_Step4_info.cpp
 *
 * Code generation for function '_coder_Fast_MPCV30_form_Step4_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV30_form_Step4.h"
#include "_coder_Fast_MPCV30_form_Step4_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties()
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 9);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString(
    "Fast_MPCV30_form_Step4"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(9.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (6.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.3.0.713579 (R2017b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char * data[41] = {
    "789ced5ddd6febc875d7ddbdbb9b8b6213a3f9eea6edde45709174034bb264c9ba455bc9922ccb96ac4f7f2e5a5d8aa424da144991942cb9c5424011200ffb90"
    "bef5a1dbfab14850206f0dd03e6c803ef4b128b2c16e1360051445d13fa07d2e296a6c4957734599f448a4cf0086451f717e33c7677e7378e670c6f3289d7de4",
    "f178beacfd3cd67e3efb5bfdcae379db6394b5d1efd73c93655afe68f47b67ea1a953786b5dfde87e47f33fa4d8b82ca7655e382e704f6a0ddacb2b27621504d"
    "f6a61a466c720225a8e59ec47a645611f90ecb0c25358e67cb5c93cd886317bb9c76d1dc1913dd5ce822fd73bcc1d217a576d3233794dbe6f2e3179e71fd60fa",
    "ffd8a47e3a18fde8dff379d66fe41f24ff34f1dc1ba71485632bb18ec8319440b3de5c5551299a1ffb532527b1424614a503d1f8b6372e326ca5ce0ada07a957"
    "116b951843492ad7612b259595f4be7b772845ad64f3f1a380af5213e5e650125c6fdef6f3c5583f1e8df5e3cd19fd1c973fc2fc46e589e74bb717fdfd28c2eb",
    "62ea9ba5d759785fc3e021bd2279b235ec7b86ada9259592d5a0a602fdeff3fa6db61d6f4e5ddfb6e3cd613b18b15de5d95bbc8145bcab39fd46720bf69449e7"
    "b395a1d66eefdb690bb4ca8982e2cd522a4f55f56bef2cddea366546bf36da552e1ff93c46d48e3d84c7cd12f1ac8ed36f60f090bd22f9512a7c9c554b47f18d",
    "e076ca9f4b8af9fd9d4ee2b61df93938f3dae1c15c93aa7f80b91fc6bd153bfd41d42e1e7f0b83b7a64974fdca0cd7e1187669f3c65f5bc40b62f10cfb41f20f"
    "d29993a10919ff6faf2a8a7c55ec7ad926efe5b9aab769fc599414ef4825c67f9edcffbdffd3770a9f02dfdf139e55beff3a060fd919926f5d166a8727c15078",
    "b7c3172389adad8c78487bdcc3f74e19af12a61d66edebb5a96b549e8cb5f7b6bc17357e3fbbe1ed3ea67eb37afa7d0c3ed21392d3da4392bcce690f9db240f1"
    "eb9cb2dde678352d688f9dacccd14be3f5bfb788179fd37f247f959de83fef0f15e47d1f69c83bada1d1044f90e7fff17fff03787e5579deac5f9febb4e2b1da",
    "6e67ab5c08f6e86453d8d839e37781e7dde797e9e50f6ce3f5773178482f483ec5eb0a4df16c578a8b4d8952398d699dcaeb8939fd47f28579fd250d11b7933f"
    "fb97affe0a78fd9ef048f17a8391e4b393ab245d0f2732e15ea04dc50a5bdbc0ebeee4f5e7b6c5ed7f1b8387f482e453bcae75ddf8bb53e32fa139fd46f285f9",
    "5cd30ce1751ce0ef7bc423c5dff5eded1e130e249367dd8dceee7e994b9cca4517f9e503ccfd106fb762a704e3edacd2a024e7c6dbede0fbb1f99fe5b50fde91"
    "52c8f27dffc3e8171087713adfa77de791762f16107c01dfc1a5ea4fd26c974fba87ef61bccee669abf6f52d0c1ed20b924ff9eb0225d739816e5c58e5efe982",
    "6b072a76c55f5273f0901c670fda3f5e6619afe1ad8f7cf669d7fd46499a8110e4f3af3e2ffe12f8fc9ef048f179af7b998e503bb5faa68fce25c5d2f94e3b7c"
    "e9223e77eaf8c5fdffcddadbeb9876a3f5d46f4dfcf5bda8f1fbd9e8b77dfef91b9876ac69125d7f355e14f56c5da7fae736c7e758bed616bc43a5108fcffde2",
    "f019f8e74ee7f3ad5638576ef189cd8bed46b9902aa9ad4482de710f9fc3781db7af7721ffc503f92fb3da0df92feee275c87f7975fdeee2f5efdac6ebef60f0"
    "905e907c46fe0b25af23efdcba7f3e5d70ed4105e15ddf110fd51f9d8387e40bf3fafb868a908d10e4f39f1c7f1bf8dce97c5e6d84f22702af3225b1996c0bbb",
    "816a727b2f057cee763eff31a63eb37af93e060fe905c9a7f89c9224be571a32165a1a4e0b799ea2d12bd2f3f2f8cdb6ef2b73da87e4b5512b2a0d4a60f8dbf5"
    "d99f59c4cfcec147f285f91eafc1a14111b4a7f80f37216fc6e9fc9fd9dba74f5bf948ec341b94950d89dbe884f712eee17f18c7b3db3f6977ebaef3f311fea2",
    "f19b6b8b78d139fd4772f0f3717846792878e0e7db533fe4cb8cdb57e886cf7f84a9cfac5e9e62f0905e907cdacf571456568f289e634adc151b93eba3ef3935"
    "2e9f9ca307245fdc0f784953a4e77fc87fbf473c52fc9ee5aae9d25ef24cda6da69291c876a173791589bb87df61fc4e96c97dc8a2b0feea81f5d759ed86f557",
    "77f1bcdbd75fadc66bf253d7a8203d22b92d3cff945374795da678a276173d259617a9f7b0e681bcc889e7baa15288ef13f673e06fe7f3f76637cbef5c7498f3"
    "74e8a4bbc7c81b41a11482bc48178e57bdd8973f037ef9abfb0f7eb9593ca33c143cf0cbeda9df797e79556c0b8c42d62f2fd8c6f7bf8bc143fa42f297f83ead",
    "3f90b0729cd714e3b1cf6f7f3c757ddb9ec7c3f6d00d6ab8706b17dfc7e6f41fc9efc0f7e31a42db4e90e4a78fbef104e2ed4ee7fb1d2193df8e1d1f5c71cd6e"
    "ee5c629a39f5a0e7a2783bf0fdecf64ff2fda16d719879feb4d6ff26d55d1e9f5b7daedbc4e219f680e48b3dd70d954278bda5fff36f027f3b9ebfe5964f3ae7",
    "9460ac19ca87857cf524b07fa4b868bf47e0efd9ed9f5c3725cbdf9c00fcfd127f730269fefe27e06fe7f3779d3a0de702c707ad7035a6c637a95c900d165c94"
    "cf08fc3dbbfd93fef7916df196ef60f090be907c3ade22306c372da8459617255dbeacf753addacbfe1c3c24b7b2bfd084b2c8c7d9ff2729409cdde9bc9fc9ec",
    "c4c3b1acbc57cb349566bed1889df8af5ce4b7ff1be67eb37a1430f5233d22b98de3f8698d1729b542ebf1d48a7e0e2ec5094a057d691488266a9703d6b679e1"
    "db183ca44f249f9a17862ac96a7fe347f265f9fdd716f1fe088b67f41fc917f6236e3544daff87f799ee118fd43cd0d90a04c3ecde7eae9688a86761aa988973",
    "4d17adb7fe2be67eb37aa431f5233d22b99df300a75414ae2eb0cc34f97b08dbe32734c4754ce2415cc7993c4b1a0fe23af6d40fef314d96497b4b016f9bc403"
    "de76268f92c603deb6a77ee0edc932b98e9a853c1893789007e34c1e258d077930f6d4bf0ae716e3f78579daa1e4e1a11b15491699f176bfc0b4cb5e7bbb8d93",
    "f431f599d5d3ef61f0909e905cd34745a3ab4a4d947951942a6287956bbc7859a11b2c7df170d74fa7edc498ee5fa12af2eba7fffc5f6f00df3b9def95fd6437"
    "99b8bacaef753782d90d5fbc10f3fb5c74ced26798fbcdeab185a91fe911c96d1cc74f5ffd854a83e525569eeae70b4c3f56351e33cfcfe6941a37de3fabe3e1",
    "9b583ce3ff88e4987c1edbfc7dff9c7620f93c7baa715d969144ada15e5d55cb786f09f61fb8473c52fc5fea495c73b3553cf6735526983e2be4b3fe4ec23dfc"
    "0fe375dcbe7c37fc2d61ea33ab97b73178482f48ce2982f11ebdda93f43ddd9d9af7f27c4e7f917c213b1853cd12ce3bff07c87b713e7fa70217bd52abcef1f1",
    "72fca2d8daae972f0e932ee26ff0dfcdf5d39c7da6212e6f120fe2f2cee45dd2781097b7a77ee07973fd34659f7db23c0f79339037e3763cc89bb1a77eab3cdf"
    "c1d48ff488e41f0c076b9c52148eadc43a22c75002cd7a735545a5687eec4f959cc40a198dbe0f44e3dbdeb8c8b0953a2b681fa45e45ac55620c25a95c87ad94",
    "54562a734dd6bb43296a259b8f1f057c3afb37879220f9733d3251bbecf36b183ca457244fb7867dcfb035b5a452b21ad454a0ff9dd47c33bd8fe4c022ded59c"
    "7e23b9057bcaa4f3d9ca506bb7f7a123be94d17ca25f7b67e9967c5ca85fce473e8779e49ef048cd236a41a16a19f9289c3fcd34b8939dcb065bda75d1f3c200",
    "733f8c7b2bcf0d7bb63d37bc85c15bd324ba7e47294f4b9b37e07cb01bbeff30fa05ac03389defd3bef348bb170b08be80efe052f52769b6cbbb288f6780b9df"
    "ad7c2f61fa63d64e5fc3f4f7c958bf6f4a7f3f6a7cc8d8c6ffaf63f0d73489ae6faa6aee3de055e5ff0d2c9e614f48bed039f09a5296e0ef7f72f80cf8dfe9fc",
    "dfaa56995a50aae6caf9925c10fda9149f09bac8df87f13a6e5fefda96a70fe788bcbaff708e88593ca33c143c3847c49efa81d767e767f631f599d5cb1df729"
    "53688aa7e475e49d2feffdabeb3be2a1faff780e1e922fccebef1b2a42364290cfffead7cf81cf9dcee7e79ba9429d291ca5233b07fec851b5b059afe55d744e",
    "08f0f96c3eff11a63eb37a790f8387f482e4537c4e4912df2b0d190b85a28cefd9f51ec057e6b40bc96b23f44a8312189eb5cd7fdf99838fe48befa3f1b2e608"
    "afef5ffe5618f2799ccef7b17c5d1582ddcdb2c448c574a6209f1d9c855dc4f7307e27cba4bdedbace9f47f88bc669ae2de2813f6f15cf280f050ffc797bea1f",
    "60ee8775d7d9fd5d6cdd3513353ed8b75fda1b18fc354da2eb5b122f87ef24c0baebf0cfa2a478872a59c2baeb479f86c0bf773aff1f378ed850a950da2c960b"
    "ed93c4fed991583a7411ff3b65bc12e56dcf7b51e3f7335887f5c03aecac76c33aacbb78deedebb0d798fbcdeaf10f31f5233d22f9e23cffb4c6abc86b259d0f",
    "7feb972f69ff31233891ac3b366e63875dcce475a419f27cfef1c7bf013e773a9ffb0e2ec3cd32d73cdbe78a4c723f41976ab59e8bf225af31f73fdc71eb99e0"
    "73dcf38259fdbc8dc143fa41f2fbdaff8c348fc3fe6796f186e5a1e0c1fe67f6d47f8db91f78dc1e1efdd2d4352a6b9a04ed43ac3d93349c1a2fb76b7f9ba9fd",
    "4b7595903e5706f8fa1ef1acf2f5d73178c8ce90bcd362935287562227970151cc2b257fe0f4cce31ebe5ed938e82d5f3fad71b2a21adbab93b5b74f5ed8162f"
    "87f3455e8d07e78b2c8a6794878207e78bd8533ff0fd6499b0b7c10bdbfcf4c753d7a8e0ce0bb18a47da4f77d13903702ec83de2c1b920f6d47f8db9ff41af77",
    "8ee5215a7d5fe97b183ca41f249ff5bed2362750f254eefeaabcaf64d56fcfccc147f2bbbdef304b73c61440d06fe7be0cef2d399effaf584a8c09078133b55e"
    "df48f9b239e6f0d8ef22fe5f85f3bb31fc6f78ee15edd19b522b66f3b5ed8dd39c41de8b453cf7adbb40decb7de241de8b3df55be5f56d4cfd488f487e075e17",
    "44f5803ac8c9696d28d7d1c12064d74d8f89bd67c429022598e8dfaac66382583cc30e907cb1734174a510f7c7211e738f78a4d64d5bb176ae19ec9d047d4579"
    "a31df7b3914ef3c0e31ede86f13a6e5fdf85f78a3c2bbebe02ef15b91a0fde2bb2a77ef0c7270bce1fef63ea33aba7773078484f483e7b7f981a2f8ae6d61b56",
    "35de129dd37f24bff3fe304315ad3709f2fb4f20dfd1f9fc5e6d84f22702af3225b1996c0bbb816a727bcf45e7f95d63ee7fd0eba8fd03dbe2e766cfe59be275"
    "5696c58973525f586cc7bcfc9be9735997edb72b5a7b58c66bb0f988d3a7a97da824f27efbebfffe0cd6479dceeb42f9b4406d9cee9e053a9d76f2a4e30f34f7",
    "3817edfb32c0dc6f568f4edbf7eb05a63ff6dae9edbc80c3b38b8f9596ac9ae9dfaac6df03583cc37e907ca17da075a5907f5fed1770be92f3f93e984ad61abe"
    "50fa3c970ca4d57c41103af1848be234305ec7edcbbe7dbdbe83c1437a41f297e2ef09b149714272da8f972cb6c76afee3b545fce81c7c24bf433c7e4c6324e3",
    "349e8f07dbe0cfaf2abf9b5d5fe5b3d96ad21f886f5e72349d54a44ee3b4beef710fbf5f63ee7fc0e3562b2182fb082812252bac53e3eb112c9ef1ff477293f3"
    "bbae0c7d86476a59c27b4afdbfa3ff0ffcf255e56db37ef9265fdcbd14b35ba9c0e16e3d4cc7aff68ae9928bf219c12f1fb7afef415cdd221ec4d5edc233ca43",
    "c183b8ba3df5039f8fdbd7ba6d7196dfc1e021bd20f9ecfc17142d5fde7e30d777c443f5ffc91c3c24bf73fecbc84648e637fee77f837fbeaa7c6e36aeb2d5ce"
    "947c47815c4c4e0792c2c95e312414431ee073b7f3f98f31f599d5cbf73178482f483effbcd3b490e7299a1d7d7f55e2e83fb3889f9d838fe4769c9b38d220e9",
    "fd1ee33fdc047f7e55f9dfac3f9fd9dba74f5bf948ec341b94950d89dbe884f712eee17f18c7b3dbef763f1fe1938ec3839f6f15cf280f050ffc7c7bea1f60ee"
    "877c482b766a5f3ee45b18bc354da2eb5766b80ec7b04be3fd157bbf597f4f62a412e2fb11fcf49d02f0bde3f9feb2503b3c0986c2bb1dbe18496c6d65c443da",
    "e31ebeff0c73bf593d7630f5233d22b905be8f6b1e5ca5ce0ada07a957116b951843492ad7612b259595ca5c53a37f9de7b3f9b846f0fab6decda12448f69c7b"
    "add8788e9e59fbcc55cf5f9ee43ccbf3fb0716f1fe7c4ebf919c84ff3053b7e4d77b1bf9c8e7308fdc131ea9715a164ad566ad2cb13c9bdcf1756bb2ff305ff6",
    "b8671e1960ee87716f653e89937b6e6095062539f7b92184c533ec07c917da1769a414b27e44ffc3e817f0dcb0aa7c6f763d20ed3b8fb47bb180e00bf80e2e55"
    "7f9266bbbc8bce0381e70673fd34679f39e2cf0d49233656e4ea0d786eb0d97f98a95bf2cf0de7f0dce0fc79a4944a1543ad9deae9f1c55ecbcfb4aaa9bd06e3",
    "a23cd101e67e18f756ecf407b0de60120fd61b9cc9bfa4f160bdc19efa0798fb81ef1dc2f710278238d103c08338913df5439cc85c3f4dd9679f7c9c280d71a2"
    "fbce4f5bb6ff20419c6875e711b3e334be9b0a9cb4cf7adb62b6934f53593a7712d8f0b8671e1960ee87716f653ed983e7069378f0dce04cfe258d07cf0df6d4",
    "3fc0dcef56be9730fd316ba7af61fafb64acdf37a5bf1f353e646ce3ffd731f86b9a44d737555586d74ee5ff0d2c9e614f48bed0fbeb9a52c8bf8fd2ff04f669"
    "763effb7aa55a61694aab972be2417447f2ac567822eda0f6e80b91ff8df0efecf448d0f59dbf87fde39b966cf777f20fc3f767e8f711f41feffe8d310ec37e1",
    "74fe3f6e1cb1a152a1b4592c17da2789fdb323b1740879418ee5ff1798feacea7bc88fa7ae51817359566ebf2a3897e51ef1e05c167bea1f60ee07be5f0dbe87"
    "3c50a3401ee8349e511e0a1ee481da533fe40599eba729fbece76dcb0b32eb8fa077a4a713839c9a17f41773fa8de424df3f9fe540109c47fe12f28256771e31",
    "3b4ee9edad801c2a670af964882a27528dc376eb18d68961dc4f7d1ff69db81b1ee40539937f49e3415e90b5faff1ff2903ad6",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 106224U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_Fast_MPCV30_form_Step4_info.cpp) */