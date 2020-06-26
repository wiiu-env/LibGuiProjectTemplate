# libgui template


## Building using the Dockerfile

It's possible to use a docker image for building. This way you don't need anything installed on your host system.

```
# Build docker image (only needed once)
docker build . -t libguitemplate-builder

# make 
docker run -it --rm -v ${PWD}:/project libguitemplate-builder make

# make clean
docker run -it --rm -v ${PWD}:/project libguitemplate-builder make clean
```