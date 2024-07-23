from setuptools import find_packages
from setuptools import setup

setup(
    name='firstservicepkg',
    version='0.0.0',
    packages=find_packages(
        include=('firstservicepkg', 'firstservicepkg.*')),
)
