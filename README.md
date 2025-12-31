This is a fully functioning Marching Cubes Terrain generator plugin for UE5!

I'm still getting to making a tutorial for how to use it, and it requires C++ to manipulate the generation algorithm, but feel free to download and mess around with it; it comes with working generation out of the box, and the source code is fairly readable.

In order to install, download the repo, and paste it into <YourUE5Project>/Plugins/MarchingCube/

Then you should be able to build and enable it on launching your project.

In order to get the terrain running (it generates live at runtime) Add a terrain manager actor to your level and configure the settings for the marching cube algorithm in its blueprint settings.

If you're curious about the project but this sounds too daunting to dive into, hang tight, a tutorial will be incoming!
