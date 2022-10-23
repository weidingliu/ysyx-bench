// import Mill dependency
import mill._
import mill.define.Sources
import mill.modules.Util
import mill.scalalib.TestModule.ScalaTest
import scalalib._
// support BSP
import mill.bsp._
import mill._, scalalib._
import coursier.maven.MavenRepository

object playground extends SbtModule {
  m =>
  override def millSourcePath = os.pwd

  override def scalaVersion = "2.13.8"

  override def scalacOptions = Seq(
    "-language:reflectiveCalls",
    "-deprecation",
    "-feature",
    "-Xcheckinit",
    "-P:chiselplugin:genBundleElements"
  )

  override def ivyDeps = Agg(
    ivy"edu.berkeley.cs::chisel3:3.5.1",
  )

  override def scalacPluginIvyDeps = Agg(
    ivy"edu.berkeley.cs:::chisel3-plugin:3.5.1",
  )

  //  object test extends Tests with ScalaTest {
  //    override def ivyDeps = m.ivyDeps() ++ Agg(
  //      ivy"edu.berkeley.cs::chiseltest:0.5.1"
  //    )
  //  }
  //}
  object test extends Tests with TestModule.ScalaTest {

    override def forkArgs = m.forkArgs

    override def ivyDeps = super.ivyDeps() ++ Agg(
      ivys.scalatest
    )

  }
}
//object chiselModule extends CrossSbtModule with HasChisel3 with HasChiselTests with HasXsource211 with HasMacroParadise {
//  def zincWorker = CustomZincWorkerModule
//  def crossScalaVersion = "2.11.12"
//}
