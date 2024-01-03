/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_Fast_MPCV12_form_Step1_info.cpp
 *
 * Code generation for function '_coder_Fast_MPCV12_form_Step1_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Fast_MPCV12_form_Step1.h"
#include "_coder_Fast_MPCV12_form_Step1_info.h"

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
    "Fast_MPCV12_form_Step1"));
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
    "789ced5d4b6feb4876e6edf74530331799777a92f46d0c2e66d28daba725fb064924eb61cb92ac971fb21b892e4552126d8aa4484a969da0e1cd0003a417935d"
    "16e98997c10c02cc2e03240b0f90459641900ed24980161004417e40b20e29aa6c4957d5a224ba2452a70043a60eabbeaaa3c38f87a70eaba847a9ec238aa2be",
    "aaffbda5ffedfed438a2a8af50667932f87c8d1a2de3f24783cfe4d8312a6f526f8cd443f2bf187c3292a8715dcd3c107891db6f37ab9ca21f887493bb6b8695"
    "9abc488bdac1a5cc510aa74a428763fb921a2f70077c93cb484307bbbc7ed04c0e89ee0e0c91f17facc131e7a57693521aea7d7785e1036a483fb798f1bf6151",
    "3f158c7e8cf3bcd48777f28f127f187fe189d1aaca73956847e2595a64384faeaa6a34230c7d55c9c99c989124795f32cff6c42496abd439d1e38f7b92b4aa55"
    "b2f9d891cf5fa9494ab352d238d9f7bc79379e9798febe65713ce39fa83ca6deb93fb84e47105e17d39e55fd7d038387f487e489567fe819aea695345ad17cba",
    "068cefa78ddb6a3fde1a3bbeefc75bfd7eb052bb2a70f778bd05f1aeb078e6b8917c01bbc9a4f2d94a5f6bf7f5926d91d17849543d595a13e8aa71ec99a45bdd"
    "a4fa85a05d718fbc9f4789da3145747c4bc55bf43afd16060fd92b921f7ba33be553d65ff24af9934eab16ba92c4cd9dfb7ee4a7e04ceb07853926d57e0f531f",
    "aefbc9e3b566a71f46ece2f1b731784f7489a15f85e53b3ccb2dedbef1e70be205b178a6fd20f947a94cb96f42e6efedd12449a84a5d0fd7143c025ff534cdaf"
    "2559f50c5462fef2e47ef7eb9fbf5bf80cf8fe81f016e5fb6f62f0909d21f9e645a176580e86c2bb1da1b815dfdccc48870ce51ebe77caf52a63fa61d5be5e1b",
    "3b46e5f1d8f966793f627e3ebbe3ed6b4cfb56f5f4db187ca4272467f48721e539af3f5c2a222d3ce7d5ed362f6829517fbce4149e591aafffd58278312c9e39"
    "7e24ff323b31fe3ee82bc8f301d290675c43831b3c419eff9bfffd37e0f955e579ab7e7daed38a456bbb9dcd8342f0924934457ff254d8059e779f5f6694dfb1",
    "8dd7dfc3e021bd20f918afab0c2d705d392635655ae375a6752aafc7b178e6f8917c665e7f4543c4ede48ffefeebff02bcfe4078a478bdc1caca69f92ac1d4c3"
    "f14cf832d0a6a385cd6de07577f2fa0bdbe2f6bf8ec1437a41f2315ed7876e7eefd4f84b088b678e1bc967e6735d338645007fbb038f147fd7b7b72fd9702091",
    "38edfa3bbbe9033e7ea2145de497f730f521de3e79bc2b176fe7d4062d3b37de6e07df0fddff3941ffc733500a59bebffe38f205c4619ccef729efd956fb321a"
    "10bd01effe85e64b305c5748b887efe17a9dccd38bdad7773078482f483ee6af8bb452e745a671be287f8f175c3f50b12bfeb233050fc971f6a0fff00ac77a4c",
    "6f7de0b38fbbee774a229a8775fdf517c57f063e7f203c527c7ed9bd486dd1c95a7dc3cbe41252e92cd90e5fb888cf9d7afde27e7fabf6f63aa6df683ef53b23"
    "dfbe1f313f9f0d3eedf3cfdfc4f4e3892e31f4571324c9c8ca75aa7f6e737c8e136a6dd1d3570af1f8dcaf0e9f817fee743edf6c8573072d21be71bedd3828ec",
    "94b4563cce24ddc3e770bd0edbd77b90ff4241fecba47e43fe0b193cc87fb1a77de0f561fbfabe6dbcfe2e060fe905c927e4bfd0ca73e49d2fee9f8f17abf197"
    "9b39f150fb912978483e33af7f60aa08d908413effd9f17781cf9dcee7d546285f16058d2d49cd445bdc0d5413db7b2e7a4f09f87c329fff04d39e55bdfc1083",
    "87f482e4637c4ecbb27059ea33169a1a4e89798166d0abd0d3f2f8adf6ef6b53fa87e4b5412f2a0d5a6485fbf9d95f2c889f9d828fe433f33d5e837d8322684f"
    "b11f6d40de8cd3f93fb397664e5af9ade84936a8a87e99f777c27b71f7f03f5cc793fb3f6a77cf5de7e7cf1bbfb959102f82c5033fdf1a9e59d6050ffc7c7bda",
    "877c9961fb0addf1f98f31ed59d5cb530c1ed20b928ffbf9aaca29da112df06c89bfe2a24a7d709e53e3f2092c9ea907249fdd0f784553a4efff90fffe8078a4"
    "f83dcb5753a5bdc4a9bcdbdc496c6d6d173a17575b31f7f03b5cbfa365741db208ccbf5230ff3aa9df30ff4a060fe65fed697fd1784d7eec981a3acfd02392db",
    "c2f34f79d590d7155a206a779113627991c6086b14e4458e3cd7f595427c9db05f027f3b9fbf37ba592179de61cf52a172778f55fc41b11482bc48175eaf46b1"
    "2f7f06fc721c1ef8e5b3e199655df0c02fb7a77de7f9e555a92db22a59bfbc601bdfff26060fe90bc95fe1fb94f140c2293141570c659fdffec6d8f17d7fdee8",
    "f78769d0fd895bbbf83e8ac533c78fe473f0fdb086d0b21324f9e9936f3d8678bbd3f93e2966f2dbd1e3fd2bbed9cd9dc96c33a7ed5fba28de0e7c3fb9ffa37c"
    "7f685b1c669a3fad8fbf497797c7e78b3ed76d60f14c7b40f2d99eebfa4a213cdf72fdcb6f037f3b9ebf9596573ee3d560b419ca87c57cb51c481fa92e5aef11",
    "f87b72ff47e74dc9f2372f027fbfc2dfbc489abfff16f8dbf9fc5da74fc2b9c0f17e2b5c8d6ab10d3a17e4820517e533027f4feeffa8ff7d645bbce57b183ca4"
    "2f241f8fb7882cd74d895a911324d9902febfdd445ed253d050fc917595f684459e4e3ecff931021ceee74decf6492b17034abecd5324db5996f34a265df958b",
    "fcf67fc4d4b7aa4711d33ed22392db781d3fad0912ad5518239e5a31f6bba57951ada093068168a276d9e36cbb2f7c178387f489e463f785be4ab2fa77c240be"
    "2cbfff6641bcdfc3e299e347f299fd887b0d91f6ffe17da607c423751fe86c0682616e2f9dabc5b7b4d3305dccc4f8a68be65bff0153dfaa1e194cfb488f486e",
    "e77d80572b2a5f1739769cfc29c2f678cb405cc7221ec475e6c533cbbae0415cc79ef6e13da6d1326a6f3bc0db16f180b7e7c533cbbae0016fdbd33ef0f66819"
    "9d47cd421e8c453cc8839917cf2ceb82077930f6b4bf0afb16e3d78579daa195fea61b155991d8e17ebfc4f4cb5e7bbb8f935c63dab3aaa7dfc2e0213d21b9ae",
    "8f8a4e57959aa408922457a40ea7d404e9a2c23438e67c7de74fc7edc4bcdd7f89aac8cf9ffedd7fbd097cef74be57d3896e227e7595dfebfa8359bf375688fa"
    "bc2eda67e95f31f5adeab185691fe911c96dbc8e9f7ef909950627c89c3236ce979871ac6a3c669a9fcdab35de38b6eb7af83616cffc1d911c93cf639bbfef9b",
    "d20f249f664f35becbb1b2a477d463a86a19ef2dc1fa030f88478aff4b9732dfdc68158f7d7c950da64e0bf9acafe3a2f57ee17a1db62fef1d7fcb98f6aceae5"
    "2b63c7d4d079865e909c5745f33d7aed5236d674776adecb0b2c9e395e249fc90e8654b384fdceff1af25e9ccfdf3b81f3cb52abce0bb183d879b1b55d3f383f",
    "4cb888bfc17fb7364e6bf69982b8bc453c88cbcf8b679675c183b8bc3ded03cf5b1ba725fbbc26cbf390370379336ec783bc197bdabfc5d4b7aac70aa67da447"
    "24ffa87fb1c66855e5b94ab423f12c2d329c275755359a1186beaae4644ecce8f4bd2f99677b6212cb55ea9ce8f1c73d495ad52ad97cecc8e73768be5929699c",
    "ecd3af6cb2769889d86587dfc0e021fd2179aad51f7a86ab69258d56349fae01e37b52f795f1f5227b0be25d61f1cc7123f902769349e5b395bed6eeeba1adbc"
    "d4c17dc338f64cd2ed12e23f678fbc9fc3fde281f048dd2fd8748a2e554f98dda364f6acecdf08faea87972e7a2ee861eac3753f79bca49f0fdec6e03dd12586",
    "7e07a94d4bbb6fc03e6077cf071f47be8078bfd3f93ee53ddb6a5f4603a237e0ddbfd07c0986eb0a2ecad7e961eabb95ef65cc78acdae96b98f13e1e3bbf5fae"
    "f722e63f69dbf8ff750cfe135d62e89bae5a7bdf7755f9df8fc533ed09c967daef5d570af9fbfef5ede133e07fa7f37fab5a656b41b99a3bc8979482e4dbd911",
    "324117f9fb70bd0edbd77bb6e5e3c37e21383cd82f64363cb3ac0b1eec17624ffbc0eb93f330af31ed3df07a642a430bb4f21c79e7cb7bcfea664e3cd4feef4f"
    "c143f29979fd035345c84608f2f99ffdfb0be073a7f3f9d9c64ea1ce168e525bc97ddfd651b5b051afe55db41f08f0f9643eff31a63dab7a791f8387f482e463",
    "7c4ecbb27059ea33160a4599e7d995efffb529fd42f2da00bdd2a04556e06cf3df9353f0917cf6f5325ed51c59bea72e7e2d0c793b4ee7fb68beae89c1eec681"
    "cccac554a6a09cee9f865dc4f770fd8e96517bdb759d3f3f6f9ce666413cf0e717c533cbbae0813f6f4ffb3d4c7d98779d3cded9e65dd311f39ffb3cce9798f6",
    "adeafb4d0cfe135d62e85b962efaef1ec0bc6bff6b49563d7d952c61def593cf42e0df3b9dff8f1b475ca854286d140f0aed723c7d7a24950e5dc4ff4eb95e89"
    "f236f57ec4fc7c06f3b014ccc34eea37ccc392c18379587bdabfc1d4b7aac7dfc5b48ff488e4b3f3fcd39aa021af95743efcfd7ac54b5a67cc0c4e24ea8e8ddb",
    "d8611713791d69863c9f7ffae97f009f3b9dcfbdfb17e1e601df3c4df34536918e33a55acd4def47dd60eaafef754b8df039ee79c129eb9c91e67158e76c61bc"
    "7e59173c58e7cc9ef66f30f581c7ede1d177c68ea9bbf3deb95b6f587f266938355e6ed73a3663eb941a2a21bd7f0cf0f503e22dcad7dfc4e0213b43f24e8b4b",
    "c81d46dd2a5f042429af967c819353ca3d7cbdb271d07bbe7e5ae31555339751276b6fb72f6d8b97c33e225f8e07fb88cc8a679675c1837d44ec691ff87eb48c"
    "d85befa56d7efaacfb822c8a47da4f77d17e02b0ffc703e2c1fe1ff6b47f83a9bfd6f39dd47d5c65d1f7957e80c143fa41f249ef2b6df322ad8ce5eeafcafb4a",
    "8bfaed9929f8483edffb0e933467de0208faedfc57e1bd25c7f3ff15474b51713f70aad5ebfe1d6f36c71e1efb5cc4ffabb04f3786ff4dcfbda23f7ad35ac56a"
    "beb6bd719a53c87b5910cf7df32e90f7f2907890f7624ffb8bf2fa36a67da447249f83d74549dba7f7734a4abf94eb680310b2f3a6c7c4de33e255911629e7c6",
    "6382583cd30e907cb6fd3f0ca510f7c7211ef38078a4e64d5bd176ae19bc2c07bd45c5df8ef9b8ad4e739f720f6fc3f53a6c5fdf87f78aa8159f5f81f78a5c8d"
    "07ef15d9d33ef8e3a305e78f5f63dab3aaa7773178484f483e797d989a2049d6e61b5635de12c1e299e347f2b9d787e9abe8799320bfff0cf21d9dcfefd54628",
    "5f16058d2d49cd445bdc0d5413db7b2edab7ef06537fade751aff76d8b9f5bdd976f8cd739459146f6437db9603f66dd7f75d97ebbaaf787633d269b0f387d9c"
    "dafb4a22efb7bffe4fcf607ed4e9bc2e1e9c1468ffc9ee69a0d36927ca1d5fa0b9c7bb68dd971ea6be5bd7fd7a8919cf43e5d7e0f0ece263b5a568c6b153e3ef",
    "012c9e693f483ed33ad08652c8bfaff62bd85fc9f97c1fdc49d41ade50ea2c9708a4b47c41143bb1b88be23470bd0edb977deb7a7d0f8387f482e4afc4dfe352"
    "93e6c5c4b81f2f2fd89f45f31f6f16c48f4cc147f239e2f1431a2319a7a13eed6d833fbfaafc6e757e55c866ab095f20b671c1334c42953b8d937a9a720fbfdf",
    "60eaaff175ab9710c1750454995654cea9f1f52d2c9ef9fb23b9c5fbbba10ce30e8fd4b284f794aeff92f93ff0cb5795b7adfae51b4271f742ca6eee040e77eb"
    "612676b5574c955c94cf087ef9b07dfd00e2ea0be2415cdd2e3cb3ac0b1ec4d5ed691ff87cd8be9edb1667f90d0c1ed20b924fce7f41d1f2e5ad077333271e6a",
    "ff0fa6e021f9dcf92f031b2199dff89fff0dfef9aaf2b9d5b8ca663b53f21e05725125154888e5bd62482c8628e073b7f3f94f30ed59d5cb0f3178482f483e7d"
    "bfd394981768861b9cbf2a71f45f2c889f9d828fe476ec9b38d020e9f51e633fda007f7e55f9dfaa3f9fd94b3327adfc56f4241b5454bfccfb3be13d17ad2300",
    "d7f1e4febbddcf5f561c1efcfc45f1ccb22e78e0e7dbd37e0f531ff221278fd79a9dda970ff93606ef892e31f4abb07c8767b9a5f1fe8abddf6cbc27315009f1"
    "f5087efe6e01f8def17c7f51a81d9683a1f06e47286ec5373733d22143b987ef6f31f5adeab182691fe911c917e0fb98eec155ea9ce8f1c73d7d42cfe6633a93",
    "1beb77372b258d937d44fd38cad6fdf2acda61ae7af6eacd8c5a9e7fdf5b10ef8fb178e6b8919c849f3051b7e4e38a178fbc9fc3fde281f048c581eac52ea376"
    "b70f9285ddfd5021aba58379ff968bf2747a98fa70dd4f1eafb5fb498cdcf301a73668d9b9cf07212c9e693f483ed3fa4703a5183f3dc1e7838f235fc0f381d3",
    "f93ee53ddb6a5f4603a237e0ddbfd07c0986eb0a2edaf7e316531f9e0f46cba81de6883f1f24cc585791af37e0f9c0663f61a26ec9fb0997f07ce0fcfbc5792e"
    "19bfbaf01e5d08adf8d179f664b7257addb44e4e0f531faefbc9e3b566a71fc2fc81453c983f9817cf2ceb8207f307f6b4dfc3d407be9f3cde95e37b8807413c",
    "680df0201e644ffbb798fa100f1a2da3f17df2f1a014c4831e3aaf6cd97ec2c7100f5addfb85d5eb7437d494738d83b290697453de8e74182868e7947bee173d"
    "4c7db8ee278fd7dafd2405cf0716f1e0f9605e3cb3ac0b1e3c1fd8d37e0f53dfad7c2f63c663d54e5fc38cf7f1d8f9fd72bd1731ff49dbc6ffaf63f09fe81243",
    "df7455ed1f3b95fffd583cd39e907ca6f7ce75a5907f8fe4fa16d657763effb7aa55b61694abb9837c492948be9d1d211384fc50e0ffb1f327f37f3a62fe93b1"
    "8dffa7ed6f6b755ff635e1ffa17d77cc7a04f9ff93cf42b04e84d3f9ffb871c4854a85d246f1a0d02ec7d3a74752e9d045ebbef530f5ddcaff2f31e3b1d74e61",
    "3f95355c670af65379403cd84fc59ef67b98fac0f793c74b9aef21dfd32c90ef398e679675c1837c4f7bdabfc5d487fc9fd1323a5f9bb72dffc7aadf81de6d1e"
    "4f00726afecf9f60f1cc712339c9f7c627390a04edea4f21ff6775ef1756afd3e4d15179afce4537cbad789c3d3d90e9443208f3c170dd8f9d0feb45cc8707f9",
    "3ff3e299655df020ff67b1f6ff1f40b7f989", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 106080U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_Fast_MPCV12_form_Step1_info.cpp) */
