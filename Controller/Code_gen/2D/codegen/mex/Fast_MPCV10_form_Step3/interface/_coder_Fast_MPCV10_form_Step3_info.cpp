/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fast_MPCV10_form_Step3_info.cpp
 *
 * Code generation for function '_coder_Fast_MPCV10_form_Step3_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV10_form_Step3.h"
#include "_coder_Fast_MPCV10_form_Step3_info.h"

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
    "Fast_MPCV10_form_Step3"));
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
    "789ced5d4d6cebd875e6fccf4391c943fed349db7983e021e90c9e7e2d59af68ab5fdbb225ebcfff8356a6484aa24d911449c9b25b0cbc0990c52cd25d179dc6"
    "cb224181ec12a05d78802eba2c8a4ed169038c80a0088aae5ba0e8a225455d5bd2d31d51267d6552e702864c1ddefbdd7b74f8f1f0dcc37ba997b2f997288a7a",
    "4bff7b5dffdbf84be388a2be4499e5f1f0f3656abc4cca5f1a7eae4d1ca3f21af5ea583d24ff8be12723891ad7d3cc038117b9ed4eabc629fa8148b7b89b6658"
    "a9c58bb4a8ed9ccb1ca570aa2474397620a9f302b7c3b7b89c3472b0c1eb07adb511d1cd812132fe4f3539e6b4d269514a53bdedae307a408de8e71a33fe572d",
    "eaa78ad18f719e9f7aff46fe41e68fd2cf7d295a5579ae9ae84a3c4b8b0ce72bd4548d668491afaa0599137392246f4be6d9be94c472d50627fa8269df1aad6a"
    "d57c31b517f057eb92d2aa56344e0e3d6bdd8ce718d3dfd72d8e67f2139547d49bb707975b7184d7c3b467557f5fc3e021fd2179a63d187a8eab6b158d56b490",
    "ae01e3fb59e3b6da8fd7278e6ffbf1faa01facd4a909dc2d5edf26de0516cf1c3792dbb09b5cb698af0eb4765b6fad23321a2f89aa2f4f6b025d338e7dd374ab"
    "9bd4a010b4ab5f5ffb3e4b10b5638ae8f8168a67f73afd06060fd92b9217956032a424d8e2def66eb621a54b7bab91f5f46d3f8a337066f583c21c936abf8fa9",
    "0fd7fdf4f15ab3d3f7e34ef1f81b18bcc7bac4d0afc2f25d9ee51676dff8739b78612c9e693f48fe413677303021f3f7f6699224d4a49e8f6b093e81aff95ae6"
    "d792acfa862a317f7972bffbe54fdf2e7d0a7c7f4f7876f9feeb183c646748be7a56aaef1e8423d18dae508ea5575773d22e437987efdd72bdca987e58b5af97",
    "278e51793471be59de8d9b9f4f6f78fb12d3be553dfd0e061fe909c919fd614879c6eb0f978a480bcf7835d9e1052d2bea8f979cc2330be3f5bfb28997c2e299"
    "e347f22fb213e3efbd81827cef210df9263534bcc113e4f99fffd7bf02cf3f549eb7ead717baed54a2bed15ddd2985cf994c4b0cae1d091bc0f3def3cb8cf2bb",
    "8ef1fa3b183ca417249fe07595a105ae27a7a4964c6bbcceb46ee5f53416cf1c3f92cfcdeb2f6888b89dfcf1df7df59f81d7ef098f14af375959393ab8c8308d"
    "683a173d0f75e844693509bcee4d5e7fee58dcfe2b183ca417249fe0757de8e6f76e8dbf44b078e6b8917c6e3ed735635804f0b737f048f17723993c67a3a14c",
    "e6a817ec6e6cedf0e943a5ec21bfbc8fa90ff1f6e9e37d70f1764e6dd2b27be3ed4ef0fdc8fd9f13f47f7c43a590e5fbcb0fe39f431cc6ed7c9ff59fc43ae789"
    "90e80ff9b7cfb44086e17a42c63b7c0fd7eb749eb66b5fdfc2e021bd20f984bf2ed24a831799e6a95dfe9e2cb87ea0e254fc657d061e92e3ec41ffe1158ef599",
    "defad0679f74dd6f9444340febf2abcfcbff047c7e4f78a4f8fcbc77968dd16bf5c68a9f2964a4cac95a277ae6213e77ebf58bfbfdaddadb2b987ea3f9d46f8d"
    "7dfb6edcfc7c3afc74ce3f7f0dd38fc7bac4d05f5d9024232bd7adfeb9c3f1394ea87744df4029c4e3739fec3e05ffdced7cbeda8e1676da427ae534d9dc29ad",
    "57b4763acdac7987cfe17a1db5af7720ff8582fc9769fd86fc17327890ffe24cfbc0eba3f6f55dc778fd6d0c1ed20b924fc97fa19567c83bb7ef9f4f16abf197"
    "ab3be2a1f6e333f0907c6e5e7fcf5411b211827cfe93fd6f039fbb9dcf6bcd48f1401434b622b5321d712354cb2437d781cfbdcee73fc2b467552fdfc7e021bd",
    "20f9049fd3b22c9c57068c85a686b36251a019f42af4ac3c7eabfdfbf28cfe21797dd88b6a931659e1767ef66736f1f333f0917c6ebec76b70605004ed29f583"
    "15c89b713bffe736b798c376319638cc87153528f3c16e74d343efa9c2753cbdffe376f7cc737efe5de3375736f1e2583cf0f3ade1996559f0c0cf77a67dc897",
    "19b5afc80d9fff10d39e55bd3cc1e021bd20f9a49fafaa9ca2edd102cf56f80b2ea13486e7b9352e9fc1e2997a40f2f9fd80173445fafe0ff9eff788478adff3"
    "7c2d5bd9cc1cc91badf54c2c962c75cf2e6229eff03b5cbfe3657c1db238ccbf5230ff3aaddf30ff4a060fe65f9d69df6ebca638714c8d9c67e811c91de1f927",
    "bc6ac81b0a2d10b5bbf821b1bc486384750af222c79eeb064a21be4ed82f80bfddcfdf2bbdbcb076da654fb29183de26ab04c362250279911ebc5e8de25cfe0c"
    "f8e5383cf0cbe7c333cbb2e0815fee4cfbeef3cb6b52476455b27e79c931beff2d0c1ed21792bfc0f759e38184535282ae18ca39bffdd589e3dbfebc3ae80fd3",
    "a40713b74ef17d028b678e1fc9efc0f7a31a42cb4e90e4a78fbef108e2ed6ee7fb3531574c26f6b72ff856af7022b3ad82b67deea1783bf0fdf4fe8ff3fdae63"
    "719859feb43efe16dd5b1c9fdb7dae5bc1e299f680e4f33dd70d944278bee5f217df04fe763d7f2b6dbf7cc2abe1442b528c8ac5da41686b4ff5d07a8fc0dfd3",
    "fb3f3e6f4a96bf7911f8fb05fee645d2fcfd37c0dfeee7ef067d182d84f6b7dbd15a424badd08530172e79289f11f87b7affc7fdef3dc7e22ddfc1e0217d21f9"
    "64bc4564b95e56d4ca9c20c9867c51efa7dab597ad1978486e677da13165918fb3ff47468438bbdb793f975b4b45137965b39e6ba9ad62b39938085c78c86fff",
    "074c7dab7a1431ed233d22b983d7f193ba20d15a9531e2a95563bf5b9a17d52a3a691888266a977dceb1fbc2b73178489f483e715f18a824af7f270ce58bf2fb"
    "af6ce2fd3e16cf1c3f92cfed47dc6a88b4ff0fef33dd231ea9fb407735148e729b5b857a3aa61d45e9722ec5b73c34dffaf798fa56f5c860da477a447227ef03",
    "bc5a55f986c8b193e44f11b6c76b06e23a16f120ae73573cb32c0b1ec4759c691fde631a2fe3f6b60ebc6d110f78fbae786659163ce06d67da07de1e2fe3f3a8"
    "79c883b18807793077c533cbb2e0411e8c33ed3f847d8bf1ebc23ce9d2ca60d38daaac48ec68bf8f31fd72d6de6ee3249798f6aceae9b73178484f48aeeba3aa",
    "d355b52e298224c955a9cb2975413aab324d8e395ddef9d3493b316ff75fa02af2f3a77ffbefaf01dfbb9defd5ad4c2f93beb8286ef682e17cd09f2a25027e0f"
    "edb3f42f98fa56f5d8c6b48ff488e40e5ec74fbef8846a9313644e9918e731661c0f351e33cbcfe6d53a6f1c3b753d7c138b67fe8e488ec9e771ccdf0fcce807",
    "92cfb2a73adfe35859d23bea3354b588f79660fd817bc423c5ff9573996fadb4cbfb01bec686b347a5623ed0f5d07abf70bd8eda97ff86bf654c7b56f5f2a589"
    "636ae43c432f48ceaba2f91ebd762e1b6bbabb35efe53916cf1c2f92cf650723aa59c07ee77f0d792feee7eff5d0e979a5dde085d44eeab4dc4e36764e77331e",
    "e26ff0dfad8dd39a7d66212e6f110fe2f277c533cbb2e0415cde99f681e7ad8dd3927d5e92e579c89b81bc19afe341de8c33ed5f63ea5bd56315d33ed223927f"
    "30b85853b4aaf25c35d19578961619ce57a8a91acd08235f550b3227e674fade96ccb37d2989e5aa0d4ef405d3be355ad5aaf9626a2fe03768be55ad689c1cd2",
    "af6cb276988b3b65875fc3e021fd2179b63d187a8eab6b158d56b490ae01e37b52f795c9f522fb36f12eb078e6b891dc86dde4b2c57c75a0b5db7a682b2f7578"
    "df308e7dd374bb80f8cf7f5efb3e83fbc53de1119bbf3d68865bf99dc3e459e5e2705f4d6cec55127b1eba5ff431f5e1ba9f3e5ed2cf076f60f01eeb1243bfc3",
    "d4a685dd37601fb09be7830fe39f43bcdfed7c9ff59fc43ae78990e80ff9b7cfb44086e17a8287f275fa98fa5ee57b19331eab76fa3266bc8f26ce1f94cbcdb8"
    "f9cf9663fcff0a06ffb12e31f44dd7acbdeffb50f93f88c533ed09c9e7daef5d570af9fbfee5f5ee53e07fb7f37fbb5663eb61b956d82956949214585f177261",
    "0fcd03c0f53a6a5fef38968f0ffb85e0f060bf90f9f0ccb22c78b05f8833ed03af4fcfc3bcc4b477cfeb91a90c2dd0ca33e49d2fee3dabab3be2a1f6ff60061e"
    "92cfcdebef992a42364290cfffecdf9e039fbb9dcf4f56d64b0db6b4978dad6d07627bb5d24aa35ef4d07e20c0e7d3f9fc8798f6aceae55d0c1ed20b924ff039",
    "2dcbc27965c0582814659ee754beff9767f40bc9eb43f46a9316598173cc7f5f9b818fe4f3af97f1a2e6c8f23d75f61b51c8db713bdf278a0d4d0cf756766456"
    "2e677325e568fb28ea21be87eb77bc8cdbdb86e7fcf9bbc669ae6ce2813f6f17cf2ccb8207febc33edf731f561de75fa78e79b77dd8a9bffdce6711e63dab7aa",
    "efd730f88f7589a16f593a1bbc7b00f3ae83af2559f50d54b28079d78f3e8d807fef76fedf6fee71914aa9b252de29750ed25b477b5265d743fcef96eb95286f"
    "53efc6cdcfa7300f4bc13cecb47ec33c2c193c988775a6fd2b4c7dab7afc3d4cfb488f483e3fcf3fa90b1af25a49e7c3dfae57bca075c6cce044a6e1dab88d13",
    "763195d79166c8f3f9c71fff12f8dced7ceedf3e8bb676f8d6d1165f66335b69a652af9f7b285ff20a537f79af5b6a8ccf71cf0b6e59e78c348fc33a67b6f106"
    "6559f0609d3367dabfc2d4071e778647df9c38a66ece7bf366bd61fd99a4e9d678b953ebd84cac536aa884f4fe31c0d7f7886797afbf8ec1437686e4dd369791",
    "bb8c1a3b380b495251ad044287479477f8fac1c6416ff9fa499d5754cd5c469dacbd5d1f3b162f877d44be180ff6119917cf2ccb8207fb8838d33ef0fd7819b3"
    "b7feb1637efabcfb82d8c523eda77b683f01d8ffe31ef160ff0f67dabfc2d45feaf94eea36ae62f77da5ef61f0907e907cdafb4a495ea49589dcfd87f2be925d",
    "bf3d37031fc9eff6bec334cd99b700827e3bff16bcb7e47afebfe06829216e878eb44623b8eecf17d8ddfd8087f8ff21ecd38de17fd373afea8fdeb456b59aaf"
    "ed6c9ce608f25e6ce2796fde05f25eee130ff25e9c69df2eaf2731ed233d22f91d785d94b46d7abba064f54bb9813600213b6fba4fec3d235e156991726f3c26",
    "8cc533ed00c9e7dbffc3500a717f1ce231f788476adeb49de8145ae1f383b0bfac043ba90017ebb6b629eff0365cafa3f6f55d78af887ae0f32bf05e91a7f1e0"
    "bd2267da077f7cbce0fcf14b4c7b56f5f436060fe909c9a7af0f531724c9da7cc3438db7c4b178e6f891fcceebc30c54f4ac4590df7f02f98eeee7f75a33523c",
    "10058dad48ad4c47dc08d532c94d0fedc37485a9bfd4f3a897db8ec5cfadeecb37c1eb9ca24863fba11edbecc7bcfbaf2eda6f57f5fe70accf64f321a74f52fb"
    "4049e4fdf657fef129cc8fba9dd7c59dc3121d3cdc380a75bb9dcc4137106a6df21e5af7a58fa9efd575bf8e31e3b9affc1a1c9e537cacb615cd38766bfc3d84",
    "c533ed07c9e75a07da500af9f7d53e81fd95dccff7e1f54cbde98f644f0a9950562b9644b19b4a7b284e03d7eba87d39b7aed7773078482f48fe42fc3d2db568"
    "5ecc4cfaf1b2cdfed8cd7fbcb2891f9f818fe47788c78f688c649c86fab89f047ffea1f2bbd5f955219faf6502a1d4ca19cf301955ee360f1b5b9477f8fd0a53",
    "7f89af5bbd4408ae23a0cab4a2726e8dafc7b078e6ef8fe416efef86328c3b3c52cb02de53bafc31f3dfe0973f54deb6ea97af08e58d3329bfba1edadd684499"
    "d4c566395bf1503e23f8e5a3f6f53d88abdbc483b8ba53786659163c88ab3bd33ef0f9a87d3d732ccef29b183ca417249f9eff82a2e58b5b0fe6ea8e78a8fd3f",
    "9c8187e477ce7f19da08c9fcc65ffd1afcf387cae756e32aab9d5cc5bf172a24946c28231e6c9623623942019f7b9dcf7f8469cfaa5ebe8fc1437a41f2d9fb9d"
    "66c5a24033dcf0fc871247ff994dfcfc0c7c247762dfc4a10649aff798fac10af8f30f95ffadfaf3b9cd2de6b05d8c250ef361450dca7cb01bddf4d03a02701d",
    "4fefbfd7fdfc45c5e1c1cfb78b679665c1033fdf99f6fb98fa900f397dbcd6ecd4b97cc83730788f7589a15f85e5bb3ccb2d8cf71fd8fbcdc67b124395105f8f"
    "e0a76f9780ef5dcff767a5faee413812dde80ae5587a753527ed329477f8fe1a53dfaa1eab98f6911e91dc06dfa7740faedae0445f30ed1b107abe98d299dc58",
    "bfbb55ad689c1c22eac7518eee9767d50e0bb593176f66d4e2fcfbbe4dbc3fc1e299e34672127ec254dd929fd7fd9f6bdf6770bfb8273c52d7e985bf7190549b"
    "0717e55cb714ad677a811da94e79e77ed1c7d487eb7efa78addd4f52e49e0f38b549cbee7d3e8860f14cfb41f2b9d63f1a2ac5f8e909f2fd87f1cfe1f9e0a1f2",
    "bdd5b87fd67f12eb9c2742a23fe4df3ed3021986eb091edaf7e31a531f9e0fc6cbb81d16883f1f64cc5857996f34e1f9c0613f61aa6ec9fb09ff0bcf07eebf5f"
    "440b2b9d567723b31e0a86b56e2ad92e28ed9487e689fb98fa70dd4f1faf353b7d1fe60f2ce2c1fcc15df1ccb22c78307fe04cfb7d4c7de0fbe9e37d707c0ff1",
    "2088072d011ec4839c69ff1a531fe241e3653cbe4f3e1e948578d07de7952dd84fb8fc3f8807b9ff7ed1cdeee4e5566ebfcde4f8ce61b3dd4815babc87d65beb"
    "63eac3753f7dbcd6ee2759783eb08807cf0777c533cbb2e0c1f38133edf731f5bdcaf732663c56edf465cc781f4d9c3f28979b71f39f2dc7f8ff150cfe635d62",
    "e89baea98363b7f27f108b67da1392cff5deb9ae14f2ef915c5ec3facaeee7ff76adc6d6c372adb053ac282529b0be2ee4c21e5ac7ad8fa90ffc3f7dbcf3f1ff"
    "56dcfc27e718ffcfdadfd6eabeec4bc2ff23fbee98f508f2ff479f46609d08b7f3ff7e738f8b544a9595f24ea97390de3ada932abb1e5af7ad8fa9ef55fe3fc6",
    "8cc7593b85fd5496709d29d84fe51ef1603f1567daef63ea03df4f1f2f69be877c4fb340bee7249e5996050ff23d9d69ff1a531ff27fc6cbf87c6dd1b1fc1fab"
    "7e077ab7793201c8adf93f7f8ac533c78de424df1b9fe62810b4abb73e81fc1fd7df2f2e36e46e31b7cf9fd6db67a76c28c98562b91ce59dfb451f531faefbe9",
    "e3b5763f81f52220ffe7bef1ccb22c7890ff63affdff076f25021d", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 106080U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_Fast_MPCV10_form_Step3_info.cpp) */
