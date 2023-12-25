from setuptools import find_packages
from setuptools import setup

setup(
    name='mrt_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('mrt_interfaces', 'mrt_interfaces.*')),
)
